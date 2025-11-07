#ifndef MANEJO_DE_ERRORES_H
#define MANEJO_DE_ERRORES_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

class Validador {
public:
    //VALIDAR IP (Es el mismo validador usado en las tareas 1-3)
    static bool IP_valida(const string & ip) { 
        stringstream ss(ip);// permite variar entre entrada y salida de datos string
        string segmento;//cada octeto de la IP
        vector<string> partes; //se crea un arreglo con las partes de la IP (o sea deebe de tener 4 partes o segmentos cada IP)

        while (getline(ss, segmento, '.')) { //getline ayuda a tomar lo datos de la IP completa, ss nos ayudara a asignar los octetos a la variable segmentos y el '.' nos ayuda a separar junto con ss los actetos de la IP
            partes.push_back(segmento); // push_back ayuda a anadir una parte al segmento de la IP
        }

        if (partes.size() != 4) {//el tamano de las partes es diferente de 4
            return false;
        }

        // Validar cada parte (octeto)
        for (const string & parte : partes) {//vamos de parte en parte de la IP
            if (parte.empty()) return false; // Verificar que no este vacía

            // Verificar que solo contenga dígitos
            for (char c : parte) { // recorre cada caracter de la parte (octeto) de la IP
                if (!isdigit(static_cast<unsigned char>(c))) return false; //valida si el caracter es un numero
            }

            int convertir_num = stoi(parte); //covierte los valores de parte a int
            if (convertir_num < 0 || convertir_num > 255) return false;  //validamos que el segmento de la ip (octeto) se encuentre en el rango de 0-255
            
            if (parte.size() > 1 && parte[0] == '0') return false;  // valida que el tamano de cada parte debe ser solo de uno, o sea deben existir 4 partes
        }

        return true;
    }

    static bool Puerto_valido(int puerto) {
        if (puerto < 1 || puerto > 65535) {  //validamos que el puerto este entre 1 y 65535
            cerr << "Error: El puerto debe estar entre 1 y 65535 \n";
            return false;
        }
        return true;  
    }
    
    static string pedirEntrada(const string& mensaje) {
        string entrada;
        cout << mensaje;           //mandamos el mensaje
        getline(cin, entrada); // esperamos la respuesta
        return entrada;
    }
    
};

class ManejadorErrores {
public:
    static void mostrarError(const string& mensaje) {
        cerr << "ERROR: " << mensaje << endl; //Muestra los errores
    }
    
    static void mostrarExito(const string& mensaje) {
        cout << "Exito " << mensaje << endl;
    }
};

#endif
