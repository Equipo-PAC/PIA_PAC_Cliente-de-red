# Pruebas Cliente-Servidor de red minimo
---
## Entorno de prueba

## Maquinas Virtuales
*Se utilizaron 3 maquinas virtuales con los siguientes sistemas operativos*:


### - ***Lubuntu (Ubuntu)***:
Se utilizo para hacer pruebas con el cliente.
Al hacer las pruebas no hubo ningun fallo al conectarse con el servidor de windows10/11, todo funciono a la perfeccion, el cliente pudo conectarse al servidor,mandar una peticion y recibir una respuesta (el estatus del servidor). Pero al hacer pruebas con el servidor de Debian las primeras dos veces fallo la conexion, esto se debio a que la red de la maquina virtual estaba como *only host* al probarla como NAT funciono.

**Version de g++**: g++ 13.3.0

#### Comandos utilizados para la compilacion cliente
- Primero se entro a la ruta donde estaba el cliente:
```bash
cd /home/user/Downloads/PIA/PIA-T6
```
- Luego se compilo el makefile
```bash
make
make run
```
- Por ultimo ya compilado el cliente se pidieron los parametros de ip y puerto:
```bash
☆*: .｡. Cliente de red minimo PIA .｡.:*☆
Ingresa la IP del servidor: 192.168.0.233
Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): 8080
```
##### Evidencia (Captura de pantalla de la compilacion)


### - ***Debian***:
Se utilizo para hacer pruebas con el cliente y el servidor.
Al hacer las pruebas como cliente no hubo fallos, logro conectar con el servidor (windows 10/11) y recibir una respuesta (el estatus del servidor). 
En cambio al hacer pruebas como servidor existieron algunos errores en la conexio, esto debido a que la red de la MV estaba en *only host* al cambiarla a NAT pudo funcionar correctamente.

**Version de g++**: g++ 13.3.0

#### Comandos utilizados para la compilacion cliente
- Primero se entro a la ruta donde estaba el cliente:
```bash
cd /home/jarvis2/Downloads/PIA/PIA-T6
```
- Luego se compilo el makefile
```bash
make
make run
```
- Por ultimo ya compilado el cliente se pidieron los parametros de ip y puerto:
```bash
☆*: .｡. Cliente de red minimo PIA .｡.:*☆
Ingresa la IP del servidor: 192.168.0.92
Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): 8080
```
**Version de python**: Python 3.6

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py 
```bash
cd /home/jarvis2/Downloads/PIA/PIA-T6
```
- Luego se ejecuto el archivo.
```bash
Python3 Servidor-Prueba.py
```
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion
```bash
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 10.0.2.15
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
cd C:\Jarvis\Escritorio\PAC-PIA\PIA-T6
Python3 Servidor-Prueba.py
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.233
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 8080
```



### - ***Windows11***:
Este fue el pc host, *no una maquina virtual*, pero tambien se utilizo para probar el servidor.
Como paso con windows 10 no hubo ningun fallo de conexion con las MV solo errores de dedo al ingresar la ip o puerto.

**Version de python**: Python 3.6 

#### Comandos utilizados para ejecutar el servidor
- Primero se entro a la ruta donde estaba el archivo servidor-Prueba.py (por seguridad solo se pondra parte de la ruta )
- Luego se ejecuto el archivo.
- Por ultimo al ejecutarse el archivo pidio la ip y el puerto por donde se recibiria la peticion (en este caso se uso la ip: 192.168.0.92 y el puerto 1024 como ejemplo)
```PS
cd C:\Users\Escritorio\PAC-PIA\PIA-T6-v2
Python3 Servidor-Prueba.py
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 192.168.0.92
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 1024
```
##### Evidencia (Captura de pantalla de la ejecucion)

