#include "Conexion.h"
#include <iostream>
#include <sstream>
#include <cstring>
#include <sys/socket.h>     
#include <arpa/inet.h>      
#include <unistd.h>  
using namespace std;

ClienteRed::ClienteRed() : socket_fd(-1), conectado(false) {}  //se va creando la conexion con el servidor

ClienteRed::~ClienteRed() {  
    if (socket_fd >= 0) { //se cierra la conexion con el servidor
        close(socket_fd); //se cierra el socket
    }
}

bool ClienteRed::conectar(const string& ip, int puerto) {
    socket_fd = socket(AF_INET, SOCK_STREAM, 0); //se crea el socket con la direccion ipv4 (AF_INET) y el metodo de transporte TCP (STREAM)
    if (socket_fd < 0) { //si no hay socket no hay conexion
        cerr << " Error: no se pudo crear el socket" << endl;
        return false;
    }

    struct sockaddr_in servidor_addr; // Configuramos el servidor
    servidor_addr.sin_family = AF_INET;  //la direccion del servidor el por ipv4
    servidor_addr.sin_port = htons(puerto); //la direccion cambia a host y red, y se  tomael puerto
    
    if (inet_pton(AF_INET, ip.c_str(), &servidor_addr.sin_addr) <= 0) {//convierte la direccion de texto a codigo
        cerr << "Error: IP invalida " << endl;
        close(socket_fd); //se cierra el socket
        return false;
    }

    cout << "Conectando a " << ip << ":" << puerto << endl; //mensaje  de que nos estamos conectando al servidor
    
    // Conexion
    if (connect(socket_fd, (struct sockaddr*)&servidor_addr, sizeof(servidor_addr)) < 0) { //tratamos de hacer la conexion
        cerr << "Error: No se pudo conectar al servidor" << endl;
        close(socket_fd); //se cierra el socket
        return false;
    }

    conectado = true;
    cout << "Conectado con el servidor " << endl;
    return true;
}

bool ClienteRed::enviarPeticion(const string& ip_servidor) { //se envia una peticion al servidor
    if (!conectado) { //si no esta conectado envia el mensaje 
        cerr << "Error: No hay conexion" << endl;
        return false;
    }
    
    stringstream peticion;
    peticion << "GET /status HTTP/1.1\r\n"; //buscamos saber el estdo del servidor y si se conecto (Lo de HTTP/1.1 es por default de este tipo de peticiones GET)
    peticion << "Host: " << ip_servidor << "\r\n"; //nos da la ip del servidor
    peticion << "User-Agent: ClientePIA/1.0\r\n"; 
    peticion << "Connection: close\r\n"; //al terminar avisa que cerrara la conexion
    peticion << "\r\n";
    
    string peticion_str = peticion.str();
    cout << "Enviando petición GET /status " << endl;
    
    if (send(socket_fd, peticion_str.c_str(), peticion_str.length(), 0) < 0) {// enviar la peticion por un socket en especifico y la peticion se manda en formato caracter y puntero con el tamano de la peticion(si se envio correctamente entonces es =0 y si hubo algun error entonces la bandera sera <0)
        cerr << "Error: No se pudo enviar la peticion" << endl;
        return false;
    }
    
    return true;
}

string ClienteRed::recibirRespuesta() { //escuchamos la respuesta del servidor
    if (!conectado) { //si no esta conectado
        return "ERROR: No hay conexion";
    }
    
    char buffer[1024]; // se crea una memoria temporal 
    string respuesta; //aqui se guardan las respuestas del servidor
    
    ssize_t bytes_recibidos; //aqui nos da la respuesta por bytes
    while ((bytes_recibidos = recv(socket_fd, buffer, sizeof(buffer) - 1, 0)) > 0) { //da la respuesta por partes
        buffer[bytes_recibidos] = '\0'; //se detiene hasta recibir toda la respuesta
        respuesta += buffer; //junta toda la respuesta
    }
    
    if (bytes_recibidos < 0) { //sies menor acero entonces no se recibio una respuesta
        return "ERROR: Fallo la recepcion"; 
    }
    
    return respuesta; //respuesta completa del servidor
}
