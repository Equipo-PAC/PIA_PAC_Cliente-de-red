# Tarea 5 — Primer avance PIA — Equipo RedMinima
---
## Resumen del Proyecto
Desarrollo de un cliente y servidor de red mínimo en C++ que se comuniquen mediante peticiones HTTP GET. El objetivo es crear una herramienta educativa para entender protocolos de red y programación de sockets de forma segura y controlada en entornos aislados.

## Alcance y Límites

### Funciones Permitidas:
- Cliente que se conecta a IP/localhost via TCP
- Peticiones HTTP GET /status al servidor
- Servidor que escucha conexiones y responde peticiones
- Logs locales de actividad y errores
- Compilación reproducible con Makefile

### Funciones Prohibidas:
- Persistencia en el sistema
- Exfiltración de datos reales
- Ejecución de comandos recibidos de red
- Modificación de archivos del sistema
- Conexiones a servidores externos no autorizados

## Plan de Trabajo

### Semana 1: Configuración Inicial
- Configuración del entorno en máquinas virtuales
- Creación de estructura de proyecto y Makefile
- Implementación básica de sockets TCP
- Commit inicial con estructura base documentada

### Semana 2: Desarrollo Core
- Cliente: conexión y peticiones HTTP GET
- Servidor: manejo de conexiones y respuestas HTTP
- Sistema de logs y manejo de errores
- Integración inicial cliente-servidor

### Semana 3: Pruebas Finales
- Pruebas de comunicación en localhost
- Documentación de compilación y ejecución
- Pruebas en MV aisladas
- Preparación de entregables finales

## Distribución de Tareas

### Ashley Rios: Cliente
- **Cliente.cpp/.h**: Main del cliente y parámetros
- **Conexion-cli.cpp/.h**: Sockets TCP
- **Manejo-de-errores.cpp/.h**: Gestión de errores

### Diego Aguayo: Servidor 
- **Servidor.py**: Servidor minimo en python
- **Pruebas**: Pruebas del servidor

### Valeria Navarro: Compilación
- **Makefile**: Sistema de compilación
- **Estructura**: Organización /src, /bin, /docs
- **Versiones**: Debug con símbolos y release

### Luis Rodriguez: Documentación
- **Documentación**: Códigos y procedimientos
- **Pruebas**: Prubas con cliente servidor

## Medidas Éticas y de Seguridad

### Prácticas Obligatorias:
- Desarrollo exclusivo en VMs aisladas
- Snapshots para restaurar estado limpio
- No recopilación ni envío de datos reales
- Ejecución solo en localhost o redes privadas
- Verificación de no persistencia en sistema

### Mitigación de Riesgos:
- Revisión grupal del código fuente
- Pruebas en entorno controlado pre-ejecución
- Logs limitados a diagnóstico básico
- Validación estricta de todas las entradas

## Commit/Tag Inicial
**Hash del commit**: 5b1f9424a0a6dd18f68cb34d0a461283f362c5c1
**Tag**: tarea5-inicio  
**Mensaje**: "Tarea5: inicio PIA — Diego Aguayo, Valeria Navarro, Ashley Rios, Luis Rodriguez" 
**Hash del commit modificacion**: e7800a65209d8d8300fa811d64b383164a735ad5
