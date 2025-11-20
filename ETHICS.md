
# ETHICS 
## Declaración Final de Cumplimiento Ético y de Seguridad

### Integrantes del Proyecto
- Diego Aguayo Frías
- Valeria Abigail Navarro Casarez
- Ashley Karina Rios Rodríguez  
- Luis Cipriano Rodriguez Gonzalez

### Declaración de Cumplimiento

Nosotros, los integrantes de este equipo declaramos que:

1. **Entorno Controlado**: Todo el desarrollo y pruebas se realizaron exclusivamente en máquinas virtuales aisladas (VirtualBox con red interna/host-only).

2. **Medidas de Seguridad Aplicadas**:
   - Uso de snapshots para restaurar estado limpio despues de cada prueba
   - Configuración de red host-only/internal-only
   - No ejecución en sistemas de producción
   - Restauración de snapshot "Cliente-Servidor Pruebas" después de cada sesión

3. **Payload Benigno**:
   - No incluye capacidades de persistencia en el sistema
   - No exfiltra datos del usuario o sistema
   - No ejecuta comandos recibidos por red
   - No se propaga a otros sistemas
   - Opera exclusivamente con fines educativos

4. **Transparencia**: Todo el código fuente es accesible, documentado y revisable.

5. **Limitaciones de Alcance**: 
   - Solo establece conexiones a direcciones explícitamente especificadas
   - No modifica archivos del sistema operativo
   - No realiza operaciones privilegiadas

### Firmas

***Diego Aguayo***
***Valeria Navarro***
***Ashley Rios***
***Luis Rodriguez***

**Fecha:** 20/11/2025
**Commit:** `[HASH_DEL_COMMIT_FINAL]`
