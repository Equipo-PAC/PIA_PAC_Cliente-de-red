# Metadatos de Configuración 


## Entorno de Desarrollo y Pruebas

### Configuración de Máquinas Virtuales
- **Hypervisor**: VirtualBox 6.1
- **Sistema Operativo**: Lubuntu (Ubuntu) 
- **Arquitectura**: x86_64
- **Snapshot ID**: Cliente-Servidor Pruebas
- **Fecha Snapshot**: 14/11/2025

### Configuración de Red
- **Adaptador **: Red Interna (host-only)
- **IP VM Pruebas**: 127.0.0.1

### Toolchain y Herramientas
- **Compilador**: g++ 11.4.0
- **Estándar C++**: C++11
- **Python**: 3.10.12
- **Ghidra**: 10.4
- **Wireshark**: 3.6.0
- **tcpdump**: 4.9.3

### Procedimiento de Pruebas
1. **Restaurar** snapshot "Cliente-Servidor Prueba"
2. **Configurar** red interna entre VMs
3. **Ejecutar** servidor en VM 
4. **Compilar** cliente en VM 
5. **Capturar** tráfico y logs
6. **Restaurar** snapshot al finalizar

### Notas de Seguridad
- Todas las pruebas se realizaron en entorno aislado
- No se utilizaron sistemas de producción
- Las IPs mostradas son de red interna o fueron editadas por motivos de seguridad y anonimato
- Snapshots permiten restauración completa post-pruebas