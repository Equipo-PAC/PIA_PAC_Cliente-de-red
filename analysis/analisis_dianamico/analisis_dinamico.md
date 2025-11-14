# *Analisis Dinamico Cliente*
---

## Metodo: comando tee 
## Comando utilizado:
```bash
./bin/cliete
```
## Entrada proporcionada:
- IP del servidor: 127.0.0.1
- Puerto: 8080

## Salida : 
La salida se encuentra en el archivo "terminal_output.txt" que esta en la misma carpeta que este archivo.

## CAPTURA 


## Comportamiento anticipado 

### Flujo esperado :
1. **Inicio**: Muestra banner de inicio (Cliente de red minimo PIA)
2. **Entrada**: Pide IP y puerto al usuario
3. **Validacion**: Rechaza las IPs/puertos invalidos
4. **Conexion**: Establece la conexion TCP al servidor
5. **Comunicacion**: Envia HTTP GET /status
6. **Respuesta**: Recibe y muestra respuesta HTTP
7. **Terminacion**: Cierra conexión y programa

### Comportamiento de Red Esperado:
- Solo conexiones al puerto especificado
- Protocolo HTTP estándar
- Timeout despues de 30 segundos si no hay servidor
- No conexiones adicionales o inesperadas

### Interfaz de Usuario Esperada:
- Mensajes claros en español
- Validación con mensajes de error específicos
- Formato de salida legible
- Manejo elegante de errores

## Obervaciones de comportamiento:

### Flujo normal observado:
1. **Inicialización**: Muestra banner de presentacion 
2. **Entrada de usuario**: Solicita la IP y puerto
3. **Validacion**: Procesa y valida las entradas
4. **Conexion**: Establece conexion con TCP
5. **Comunicacion**: Envia la peticion HTTP GET y recibe respuesta
6. **Salida**: Muestra resultados
7. **Terminacion**: Cierra el programa

### Comportamiento de Red:
- Solo se conecta a la IP especificada (en este caso para ejemplos se uso la 127.0.0.1)
- Usa puerto TCP especificado (en este caso se uso el puerto por defecto como ejemplo 8080)
- Protocolo HTTP 

### Uso de los recursos:
- No crea archivos temporales
- No realiza operaciones de sistema
- Libera sockets correctamente
- No muestra errores inesperados

## En conclusion :
El comportamiento es benigno y exactamente como se esperaba, no hubo fallos. 

La unica diferencia fue el timeot que puede  mejorar, las respuestas podrian ser mas rapidas entre el cliente y el servidor. 


## **Captura de trafico con tcpdump**

## Comandos necesarios para el analisis dinamico con tcpdump

###  Iniciamos captura
```bash
sudo tcpdump -i lo -nn -ww  analisis_dinamico.pcap port 8080
```
### Ejecutamos el servidor en otra terminal
```bash
python3 Servidor.py
```

### Compilamos al cliente en otra terminal
```bash
./bin/cliente
```

### Detenemos la captura

Presionamos ctrl + c

### Analisamos la captura
```bash
sudo tcpdump -r analisis_dinamico.pcap -nn -A
```


### Captura del trafico 
El archivo con la informacion de los paquetes esta en el archivo "Analisis_dinamico.pcap" que se encuentra en esta carpeta y tambien la ss del trafico "PIA-PAC-Analisis_dinamico_tcp_wireshark.png"  que se encuentra en la carpeta evidence.





