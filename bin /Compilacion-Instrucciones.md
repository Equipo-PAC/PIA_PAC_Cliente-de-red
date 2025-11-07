# Instrucciones de compilación 
---
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
### Compilar con Makefile
- Tienes que dirigirte a la carpeta donde hayas descargado el Cliente (para este ejemplo y los siguientes usaremos la carpeta de este repositorio src/):
```bash
cd src/
```
- Despues tienes que compilar el makefile:
```
make 
```

### Compilar sin el makefile

- Dirigete a la carpeta src/
```bash
cd src/
```
- Despues debes de compilar todos los archivos:
```bsh
g++ -std=c++11 -g -o cliente Cliente.cpp Conexion.cpp Manejo-Errores.cpp
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
python3 src/Servidor-Prueba.py
```
- Tambien puedes ir hacia donde se encuentra el archivo:
```bash
cd src/
python3 Servidor-Prueba.py
```







