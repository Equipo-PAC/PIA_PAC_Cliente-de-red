# Instrucciones de compilación actualizadas
---
*El servidor se ejecuta antes de compilar el cliente siempre.*

## Compilar Cliente  
---
### Requisitos 

- **Sistema operativo**: Linux (Se realizaron las pruebas en Lubuntu y Debian donde funciono) 
- **Compilador**: g++ (versión 7 o superior)
- **Estándar C++**: C++11 o superior
 

### Instalación de Dependencias

#### En Ubuntu (lubuntu)/Debian:
```bash
sudo apt update
sudo apt install g++
sudo apt install g++ make
```
### Compilar con Makefile dpendiendo la version del binario que se quiera:

***A LOS BINARIOS SE LES ASIGNÓ UN NOMBRE MÁS INTUITIVO (esto para hacerlo más facil de comprender para elusuario):***

***- BINARIO CON SIMBOLOS (NO STRIP): cliente_debug   (anteriormente su nombre era "cliente", por lo que dentro de las pruebas de este repositorio encontrara el titulo del archivo binario con ambos nombres)***

***- BINARIO OPTIMIZADO (SIN SIMBOLOS): cliente_release  (anteriormente su nombre era "cliente_optimizado", por lo que dentro de las pruebas de este repositorio encontrara el titulo del archivo binario con ambos nombres)***

- Para todos los casos tienes que dirigirte a la carpeta donde hayas descargado el Cliente (para este ejemplo y los siguientes usaremos la carpeta de este repositorio src/) y crear los binarios con make:
```bash
cd src/
make
```
#### Crear binario con simbolos
```bash 
make debug
```
#### Crear binario optimizado
```bash 
make optimized
```
#### Eliminar binario con simbolos y  optimizado
```bash 
make clean
```
#### Crea el binario con simbolos y compila el cliente
```bash 
make test
```
#### Crea el binario optimizado y compila el cliente
```bash 
make test-opt
```
#### Crea el binario con simbolos y el optimizado y compila el cliente (dos veces, una por cada binario)
```bash 
make test-both
```
#### Da permisos de ejecucion (en algunos sitemas es necesario)
```bash 
make perms
```
#### Da permisos, crea los binarios y los compila
```bash 
make full
```
### Compilar sin el makefile por completo

- Dirigete a la carpeta src/
```bash
cd src/
```
#### Despues debes de compilar todos los archivos (binario con simbolos):
```bsh
g++ -std=c++11 -g -wall -o cliente Cliente.cpp Conexion.cpp Manejo-Errores.cpp
make
make ./bin/cliente_debug
```
####  Despues debes de compilar todos los archivos (binario optimizado):
```bash
g++ -std=c++11 -O2 -wall-o cliente Cliente.cpp Conexion.cpp Manejo-Errores.cpp
make 
make ./bin/cliente_release
```

## Ejecutar Servidor
---
### Requisitos 

- **Sistema operativo**: Linux o Windows 10/11  (se hicieron las pruebas en windows 10 y 11, asi como en Lubuntu/Ubuntu)
- **Version Pytnon**: 3.6 o superior
- **RED**: Tanto el cliente como el servidor deben estar en la misma red

### Verificacion de la instalacion de Python
- Debe de ser una version 3.6 o superior
```bash
python3 --version
```
### Ejecutar
- En la raiz del proyecto puedes hacer lo siguiente:
```bash
python3 src/Servidor.py
```
- Tambien puedes ir hacia donde se encuentra el archivo:
```bash
cd src/
python3 Servidor.py
```
