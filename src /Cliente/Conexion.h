#ifndef CONEXION_H
#define CONEXION_H

#include <string>
using namespace std;

class ClienteRed {
private:
    int socket_fd; //se crea el socket
    bool conectado; //se valida que este conectado

public:
    ClienteRed(); //se crea la conexion
    ~ClienteRed();//se valida la desconexion
    
    bool conectar(const string& ip, int puerto); //se verifica que se halla conctado el cliente con el servidor por la ip y el puerto
    bool enviarPeticion(const string& ip_servidor); //enviamos la peticion al servidor
    string recibirRespuesta(); //seespera hasta quye el servidor responda la peticion
};

#endif
