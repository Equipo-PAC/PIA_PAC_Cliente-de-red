#include "Manejo-Errores.h"
#include "Conexion.h"
#include <iostream>
using namespace std;

int main() {
    cout << " ☆*: .｡. Cliente de red minimo PIA .｡.:*☆" << endl;
    
    // Obtenemos la IP del servidor
    string ip_servidor;
    while (true) {
        ip_servidor = Validador::pedirEntrada("Ingresa la IP del servidor: "); //validamos la entrada antes de mandarla
        
        if (Validador::IP_valida(ip_servidor)) { //vqlidamos la ip del servidor
            break;
        } else { //si se ingreso una ip no valida, entonves muestra ejemplos de ip validas 
            ManejadorErrores::mostrarError("IP invalida ");
            cout << " Ejemplos validos de la ip:" << endl;
            cout << " 127.0.0.1 (la misma computadora es el cliente y el servidor)" << endl;
            cout << " 192.168.1.100 (otra computadora es el servidor)" << endl;
        }
    }
    
    // Obtener puerto
    int puerto;
    while (true) { //pedimos y validamos el puerto por el que pasara la infromacion
        string puerto_str = Validador::pedirEntrada(" Ingresa el puerto que debe estar entre 1024-65535(si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): ");
    
        if (puerto_str.empty()) { //si se presiona enter y no se escribe nada el puerto por defecto sera el 8080
            puerto = 8080;
            break;
        }
        
        try {
            puerto = stoi(puerto_str); //verificamos que el puerto sea un numero
            if (Validador::Puerto_valido(puerto)) { //validamos el  puerto 
                break;
            }
        } catch (...) {
            ManejadorErrores::mostrarError("El puerto debe ser un numero valido");
        }
    }
    
    ManejadorErrores::mostrarExito("La configuracion fue validada correctamente");
    cout << " Conectando a: " << ip_servidor << ":" << puerto << endl; //tratamos de conectarnos con el servidor
    
    ClienteRed cliente;

    // Nos conectamos con el servidor
    if (!cliente.conectar(ip_servidor, puerto)) {
        return 1;
    }
    
    // Enviamos la peticion al servidor
    if (!cliente.enviarPeticion(ip_servidor)) {
        return 1;
    }
    
    // Recibimos una respuesta
    cout << "Esperando a que le servidor responda " << endl;
    string respuesta = cliente.recibirRespuesta();
    
    // Nos miuestra el resultado
    cout << "☆*: .｡. Respuesta del servidor.｡.:*☆☆*:" << endl;
    cout << respuesta << endl; //nos muestra cual fue la respuesta del servidor
    
    cout << "Sesion finalizada " << endl; 
    return 0;
}



