# Analisis Ghidra 
---
## **Binario: Cliente**

### Lista de strings extraidos (identificados)
- *puerto*
- *mostrarError*
- *mostrarExito*
- *conectar*
- *enviarPeticion*
- *recibirRespuesta*
- *cliente*
- *respuesta*
- *PedirEntrada*
- *puerto*
- *ip_servidor*

### Lista de funciones extraidas (identificadas)
- *IP_valida*
- *Puerto_valido*
- *ClienteRed*
- *Validador*

### Lista de mensajes de interfaz
- *Ingresa la IP del servidor: *
- *IP invalida*
- * Ejemplos validos de la ip*
- *127.0.0.1 (la misma computadora es el cliente y el servidor*
-* 192.168.1.100 (otra computadora es el servidor*
-* Ingresa el puerto (si presiona enter sin haber ingresado un puerto, el puerto por d efecto sera el 8080):*
-*La configuracion fue validada correctamente*
-*"Esperando a que le servidor responda*
-*Sesion finalizada*

### Resumen del analisis

Se pudieron identificar 11 strings extraidos (obviamente del binario sin optimizar). Ademas de los strings identificados y enbtendibles, se pudieron localizar otros posibles strings pero encriptados por lo que no se sabe del todo a que funcioin o modulo pertenece.En cuanto a las funciuones se identificaron 4 solamente aunque al igual que los strings se encontraron varios posiobles mas pero encriptados.
