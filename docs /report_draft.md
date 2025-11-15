# Reporte Técnico - PIA Cliente de Red Mínimo
## Tercer Avance - Análisis Estático y Dinámico

**Fecha:** [14/11/2025]  
**Equipo:** Diego Aguayo, Valeria Navarro, Ashley Rios, Luis Rodriguez  
**Commit:** `[hash del commit]`  
**Tag:** `tag del 3 avance`

---

## Resumen Ejecutivo

Este reporte documenta el desarrollo y análisis de un cliente de red educativo en C++ que implementa comunicación HTTP básica con un servidor Python. 
El payload, fue diseñado exclusivamente con fines educativos, permite el estudio de protocolos de red, programación de sockets y análisis de malware benigno en entornos controlados. Tras análisis estático con Ghidra y dinámico en máquina virtual aislada (Linux: Lubuntu), se confirma que el software opera dentro de los límites éticos establecidos, sin  persistencia, exfiltración de datos o ejecución de comandos remotos, demostrando comportamiento transparente y predecible en todas las pruebas realizadas.

---

## Descripción del Payload y Límites Éticos

### Funcionalidad Implementada
- **Cliente C++** que establece conexiones TCP a servidor especificado
- **Comunicación HTTP** mediante peticiones GET /status
- **Validación** de direcciones IP y puertos
- **Manejo de errores** específico para cada fallo potencial

### Límites Éticos Establecidos
- **No persistencia**: No crea archivos, registros o servicios en el sistema
- **No exfiltración**: No recopila, transmite o almacena datos del usuario
- **No ejecución remota**: No procesa ni ejecuta comandos recibidos por red
- **Alcance controlado**: Solo se conecta a direcciones explícitamente especificadas
- **Propósito educativo**: Funcionalidad transparente y documentada

### Declaración de Seguridad
El software ha sido desarrollado y probado exclusivamente en máquinas virtuales aisladas, siguiendo los protocolos de seguridad establecidos en ETHICS.md. No representa riesgo alguno para sistemas en producción cuando se utiliza en los entornos controlados para los que fue diseñado.

---

## Diseño e implementación

### Estructuras de Datos Clave
- **`ClienteRed`**: Clase principal que encapsula la conexión de red
- **`Validador`**: Clase para validar IP y puertos
- **`sockaddr_in`**: Estructura estándar para direcciones IPv4
- **Buffers estáticos**: Uso de arrays de tamaño fijo para operaciones de red

### Manejo de Memoria
- **Asignación estática**: Buffers de tamaño fijo (1024 bytes) 
- **RAII aplicado**: Destructores que garantizan liberación de sockets
- **std::string**: Manejo automático de memoria para cadenas

### Decisiones de Implementación Clave
1. **TCP sobre UDP**: Para garantizar entrega confiable de mensajes
2. **Validación estricta**: Rechazo proactivo de entradas inválidas
3. **Encabezados HTTP estándar**: Compatibilidad con herramientas de análisis
4. **Símbolos de depuración (bin)**: Incluidos en versión de análisis para Ghidra

---

##  Procedimiento de Pruebas Ejecutadas

### Entorno de Pruebas
- **Hypervisor**: VirtualBox 6.1
- **Sistema Operativo**: Linux/Lubuntu (Ubuntu) 
- **Snapshot ID**: Cliente-Servidor Pruebas
- **Toolchain**: g++ 11.4.0, Python 3.10.12

### Metodología de Pruebas
1. **Pruebas individuales**: Validación individual de los modulos
2. **Pruebas de integración**: Comunicación cliente-servidor completa
3. **Pruebas de validación**: Entradas válidas e inválidas
4. **Pruebas de red**: Captura y análisis de tráfico

### Resultados Obtenidos
- **Tasa de éxito**: 100% en casos de uso normales
- **Tiempo de respuesta**: < 2 segundos en conexiones locales
- **Estabilidad**: 0 crashes en mas de 20 pruebas
- **Validación**: 100% efectiva en rechazo de entradas inválidas

### Casos de Prueba 
```bash
# Caso 1: Comunicación normal
./cliente → 127.0.0.1:8080 → Éxito

# Caso 2: Validación IP inválida
./cliente → 999.999.999.999 → Rechazado

# Caso 3: Servidor no disponible
./cliente → 192.168.1.200:8080 → Timeout controlado

# Caso 4: Puerto inválido
./cliente → 127.0.0.1:70000 → Rechazado
```

## Procedimientos 

### Cliente con Makefile
- Primero entramos a la ruta donde esta el cliente:
```bash
cd /home/Desktop/PIA
```
- Luego se compila el makefile (se usa el test-both para probar ambos binarios)
```bash
make
make test-both
```
- Por ultimo se piden los parametros de ip y puerto:
```bash
☆*: .｡. Cliente de red minimo PIA .｡.:*☆
Ingresa la IP del servidor: 127.0.0.1
Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por defecto sera el 8080): 8080
```

### Servidor
- Primero se entra a la ruta donde estaba el archivo servidor.py 
```bash
cd /home/Desktop/PIA
```
- Luego se ejecuta el archivo.
```bash
Python3 Servidor.py
```
- Por ultimo al ejecutarse el archivo se pide la ip y el puerto por donde se recibiria la peticion
```bash
Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: 127.0.0.1
Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : 8080
```

---
## Análisis estático (hallazgos iniciales) 

- **Herramienta utilizada**: Ghidra
- **Documento resultante**: Ghidra_resultados.gzf
- **Hallazgo**: Con esta herramienta se realizo la tecnica de ingeniera  inversa y se pudieron recuperar algunos strings y funciones, asi como parte del binario "cliente" de forma humanamente comprensible.


---
## Análisis dinámico (hallazgos iniciales) 

- **Herramienta utilizada**: Tcpdump y wireshark
- **Documento resultante**: Analisis_dinamico.pcap
- **Hallazgo**: Se utilizo tcpdump para hacer el escaneo de red mientras se ejecutaba el cliente-servidor y se utilizo wireshark para analizar el archivo .pcap resultante de tcpdump. Debido a que se escaneo al hacer la prueba con la red loopback no hubo gran informacion encontrada, solo confirmaciones de las configuracionesiniciales hechas.


---
### Riesgos identificados y mitigaciones aplicadas 

- **Riesgo identificado**: El cliente aceptaba mas puertos posibles que el servidor.
- **Mitigacion aplicada**: Validar que el cliente acepte solo los puertos que el servidor puede aceptar.

- **Riesgo identificado**:Posible inyeccionde comandos 
- **Mitigacion aplicada**: Validacion de las ip's, limites en puertos, buffer con tamaños fijos.

---
### Trabajo pendiente y plan para la entrega final 

#### Trabajo pendiente
- **Probar en mas distribuciones de linux**
- **Realizar pruebas de estres**
- **Verificacion de los requisitos del PIA y su cumplimiento**

#### Plan para entrega final

- **Realizar más pruebas en distintas distribuciones de linux**
- **Realizar pruebas de estres con distintos casos de error y observar si se esta manejando debidamente**
- **Verifiar los requisitos y confirmar su cumplimiento**
- **Realizar los cambios y modificaciones necesarias para la entrega final del PIA**
