# Pruebas Cliente-Servidor de red minimo
---
## Entorno de prueba 

## Maquinas Virtuales
*Se utilizaron 4 maquinas virtuales con los siguientes sistemas operativos*:


### - ***Lubuntu (Ubuntu)***:
Se utilizo para hacer pruebas con el cliente y el servidor.
Se hicieron pruebas siendo cliente y conectandose a un servidor que esta en otra MV y tambien se hicieron pruebas siendo el servidor (cumpliendo la misma situacion anterior y siendo cliente-servidor al mismo tiempo con la ip loopback 127.0.0.1).
Al hacer las pruebas no hubo ningun fallo al conectarse con el servidor de windows10/11, todo funciono a la perfeccion, el cliente pudo conectarse al servidor,mandar una peticion y recibir una respuesta (el estatus del servidor). Pero al hacer pruebas con el servidor de Debian las primeras dos veces fallo la conexion, esto se debio a que la red de la maquina virtual estaba como *only host* al probarla como NAT funciono. Tambien al probarse como servidor y cliente en la misma MV con la ip loopback, funciono sin ningun detalle de por medio.

**Version de g++**: g++ 13.3.0

#### Comandos utilizados para la compilacion cliente
- Primero se entro a la ruta donde estaba el cliente:
```bash
cd /home/Jarvis/Desktop/PIA
```
- Luego se compilo el makefile
```bash
make
make run
```
- Por ultimo ya compilado el cliente se pidieron los parametros de ip y puerto:
```bash
☆*: .｡. Cliente de red minimo PIA .｡.:*☆
Ingresa la IP del servidor: 192.168.0.25
Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): 8080
```
##### Evidencia (Captura de pantalla de la compilacion)
En evidence.md en el apartado *Compilacion de cliente en MV Lubuntu* esta la captura con la evidencia de la compilacion.


**Version de python**: Python 3.6

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py 
```bash
cd /home/Jarvis/Desktop/PIA
```
- Luego se ejecuto el archivo.
```bash
Python3 Servidor-Prueba.py
```
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion
```bash
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.25
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 1025
```



### - ***Debian***:
Se utilizo para hacer pruebas con el cliente y el servidor.
Al hacer las pruebas como cliente no hubo fallos, logro conectar con el servidor (windows 10/11) y recibir una respuesta (el estatus del servidor). 
En cambio al hacer pruebas como servidor existieron algunos errores en la conexio, esto debido a que la red de la MV estaba en *only host* al cambiarla a NAT pudo funcionar correctamente.

**Version de g++**: g++ 13.3.0

#### Comandos utilizados para la compilacion cliente
- Primero se entro a la ruta donde estaba el cliente:
```bash
cd /home/Jarvis/Desktop/PIA
```
- Luego se compilo el makefile
```bash
make
make run
```
- Por ultimo ya compilado el cliente se pidieron los parametros de ip y puerto:
```bash
☆*: .｡. Cliente de red minimo PIA .｡.:*☆
Ingresa la IP del servidor: 192.168.0.25
Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): 8080
```
**Version de python**: Python 3.6

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py 
```bash
cd /home/Jarvis/Desktop/PIA
```
- Luego se ejecuto el archivo.
```bash
Python3 Servidor-Prueba.py
```
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion
```bash
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.25
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 1025
```



### - ***Windows10***:
Se utilizo para hacer pruebas con el servidor.
Al hacer pruebas como servidor no hubo fallo alguno al hacer conexion con las otras maquinas virtuales. Hubo algunos errores de dedo al momento de ingresar las ip's pero no paso de ahi.

**Version de python**: Python 3.6 

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py 
- Luego se ejecuto el archivo.
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion (en este caso se uso la ip: 192.168.0.233 y el puerto 8080 )
```bash
cd C:\Jarvis\Escritorio\PIA
Python3 Servidor-Prueba.py
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.25
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 8080
```



### - ***Windows11***:
Se utilizo para probar el servidor.
Como paso con windows 10 no hubo ningun fallo de conexion con las MV solo errores de dedo al ingresar la ip o puerto.

**Version de python**: Python 3.6 

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py (por seguridad solo se pondra parte de la ruta )
- Luego se ejecuto el archivo.
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion 
```PS
cd C:\Users\Escritorio\PAC
Python3 Servidor-Prueba.py
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.92
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 1024
```
##### Evidencia (Captura de pantalla de la ejecucion)
En evidence.md en el apartado *Ejecucion del servidor en MV Windows 11* esta la captura con la evidencia de la ejecucion.


##### SE USARON IP'S FICTICIAS EN ESTOS EJEMPLOS, TAMBIEN SE CAMBIARON DATOS DE LAS RUTAS PARA HACERLO ANONIMO


### Integrantes y modulos de los que se encargaron
- *Diego Aguayo* : Creacion del servidor.
- *Ashley Rios* : Creacion del cliente (cliente y conexion).
- *Valeria Navarro* : Creacion del manejo de errores y Makefile.
- *Luis Rodriguez* : Pruebas y documentacion de estas.

***Debido a cuestiones de tiempo se subieron todos los archivos al repositorio desde una sola cuenta***
