# Checklist de Entrega Final 

**Equipo:** Cliente-Servidor de red minima
**Integrantes:** 
- Diego Aguayo
- Valeria Navarro
- Ashley Rios
- Luis Rodriguez  

**Fecha Entrega:** 20/11/2025

## Video de participación final

- video_Luis_Rodriguez.mp4 — commit: Entrega video final — Luis Rodriguez
 — duración 2:30
hash: ac97f4146ddcee1e8cb4fdf63de28225d81df05e
 
- video_Rios_Ashley.mp4 — commit: Video Final — duración 2:47
hash: b308b4905ca50e154ec2856bd8a1dc09e574e4dc

- video_Navarro_Valeria.mp4 - commit: Entrega video final — Navarro Valeria - duración: 2:03
hash: 165c0b084155e9a95ec56ef17cc4de4b984920b1

- video_Aguayo_Diego.mp4 - commit:Video Final Aguayo Diego - duración: 3:29
hash:9a54c900f59733688b06617d479d542afc3ea504

##  ENTREGABLES VERIFICADOS

###  Documentación Principal
- [ ✔] `README.md` con las instrucciones reproducibles
- [ ✔] `ETHICS.md`  firmado por todos los integrantes
- [ ✔] `METADATA.md` con configuración de VMs y herramientas
- [ ✔] `CHANGELOG.md` actualizado 
- [ ✔] `DELIVERY_CHECKLIST.md` 

###  Código y Binarios
- [ ✔] `/src/` con código completo y comentado
- [ ✔] `Makefile`  para compilación reproducible
- [ ✔] `/bin/cliente` (con símbolos)
- [ ✔] `/bin/cliente_optimizado` (optimizado)
- [ ✔] `/bin/README.md` con instrucciones de compilación

###  Documentación Técnica
- [ ✔] `/docs/report_final.pdf`
- [ ✔] `/docs/tests.md` con comandos y outputs
- [ ✔] `/docs/METADATA.md` (metadatos extendidos)

###  Análisis estático
- [ ✔] `/analysis/analisis_estatico/Ghidra_resultados.gzf` (proyecto exportado)
- [ ✔] `/analysis/analisis_estatico/Analisis-Ghidra.md`(analisis detallado del proyecto en ghidra)
- [ ✔] `/analysis/analisis_estatico/terminal_output.txt` (logs de compilación)
- [ ✔] `/analysis/analisis_estatico/cliente.c` (strings extraidos)
- [ ✔] `/analysis/analisis_estatico/cliente.h` (strings extraidos)
- [ ✔] `/analysis/analisis_estatico/cliente` (strings extraidos)
- [ ✔] `/analysis/analisis_estatico/cliente_optimizado` (strings extraidos)


### Análisis dinámico
- [ ✔] `/analysis/analisis_dinamico/Analisis_dinamico.pcap` (captura de trafico con tcpdump y wireshark)
- [ ✔] `/analysis/analisis_dinamico/Analisis_dinamico.md` (análisis detallado)


### Evidencias
- [ ✔] `/evidence/capturas/evidence_14112025_vm_???.png` (las ss con este nombre inicial pertenecen a las configuraciones o pruebas hechas en las MV)
- [ ✔] `/evidence/cpaturas/evidence_14112025_Cliente_???.png` (las ss con este nombre inicial pertenecen a as pruebas con el Cliente de red)
- [ ✔] `/evidence/cpaturas/evidence_14112025_Servidor_???.png` (las ss con este nombre inicial pertenecen a as pruebas con el Servidor)
- [ ✔] `/evidence/capturas/evidence_14112025_Ghidra_analysis_???.png` (las ss con este nombre inicial pertenecen a las pruebas de binarios con Ghidra)
- [ ✔] `/evidence/videos/demo_short.mp4`
- [ ✔] `/evidence/videos/video_Luis_Rodriguez.mp4` — commit ac97f4146ddcee1e8cb4fdf63de28225d81df05e — duración 02:38

### Cumplimiento Ético y Seguridad
- [ ✔] Pruebas en VMs aisladas
- [ ✔] No capacidades de exfiltración/persistencia
- [ ✔] IPs anonimizadas o editadas
- [ ✔] Snapshots utilizados para restauración

##  INSTRUCCIONES DE VERIFICACIÓN

### Compilar y Ejecutar:
```bash
# Clonar repositorio
git clone https://github.com/Equipo-PAC/PIA_PAC_Cliente-de-red/tree/main
cd proyecto-pia

# Compilar ambos binarios
make all

# Verificar binarios
file bin/cliente_debug
file bin/cliente_release

# Ejecutar prueba básica
./bin/cliente








