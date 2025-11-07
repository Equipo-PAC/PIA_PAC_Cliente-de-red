import socket
import sys

def validar_ip(ip): #Validamos la ip 
    try:
        partes = ip.split('.') #se divide la ip hasta donde encuentre un punto
        if len(partes) != 4: #deben ser  4 partes (octetos)
            return False
        for parte in partes:
            if not parte.isdigit(): #revisa caracter por caracter en la ip para que se aun numero
                return False
            num = int(parte) #el numero dentro del octeto debe ser entre 0 y 255
            if num < 0 or num > 255:
                return False
        return True
    except:
        return False

def validar_puerto(puerto_ingresado): #validamos el puerto
    try:
        puerto = int(puerto_ingresado)
        return 1024 <= puerto <= 65535  # Puertos del usuario
    except:
        return False

def config():
    while True:
        ip = input("Ingresa la IP del servidor (por ejemplo: 192.168.1.100) Si  presiona 'enter' aceptara cualquier ip: ").strip()
        
        if ip == "": # Si presiona Enter acepta todas las ip
            ip = "0.0.0.0"  # Escucha cualquier ip
            break
        elif validar_ip(ip):
            break
        else:
            print("IP no valida. El formato debe ser por ejemplo: 192.168.0.2")
    
    while True:
        puerto_ingresado = input("Ingresa el puerto (debe estar entre 1024-65535), si presiona enter el puerto por defecto sera el 8080 : ").strip()
        
        if puerto_ingresado == "":  #si presiona enter
            puerto = 8080
            break
        elif validar_puerto(puerto_ingresado):
            puerto = int(puerto_ingresado)
            break
        else:
            print("Puerto invalido. Debe ser entre 1024 y 65535")
    
    return ip, puerto

def main():
    
    HOST, PORT = config() # Pedimos la ip y el puerto para configurar el servidor  
    print(" Servidor configurado:")
    print(f"IP: {HOST} ({'Todas las interfaces' if HOST == '0.0.0.0' else 'IP específica'})")
    print(f"Puerto: {PORT}")
    
    # Creamos el socket
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s: #para el socket necesitamos que la ip sea ipv4 (AF_INET) y que sea por TCP (Stream)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        
        try:
            s.bind((HOST, PORT)) #ya con el servidor configurado, se pega el puerto y la ip y espramos a que el cliente nos llame.
            s.listen()
            print(f" El servidor esta escuchando en {HOST}:{PORT}")
            
            while True:
                conn, addr = s.accept() #si se conecto al cliente con exito entonces
                print(f" El cliente esta conectado desde: {addr[0]}:{addr[1]}")
                
                with conn:
                    data = conn.recv(1024).decode('utf-8') #Recibimos la instruccion con hasta 1024 caracteres y los decodificamos
                    if not data: #si no se recibio instruccion se continua normal
                        continue
                    print(" Petición recibida:")
                    print(data.strip()) 
                    
                    respuesta = ( #respuesta para el cliente
                        "HTTP/1.1 200 OK\n"
                        "Content-Type: text/plain\r\n"
                        "Connection: close\r\n"
                        "\r\n"
                        f"☆*: .｡ Conexión exitosa .｡.:*☆\n"
                        f"Cliente: {addr[0]}:{addr[1]}\n"
                        f"Servidor: {HOST if HOST != '0.0.0.0' else 'Cualquier direccion '}:{PORT}\n" #Muestra la direccion y puerto del servidor
                        f"Proyecto: PIA Cliente de red mínimo\n"
                        f"Estado: *☆Funcionando*☆\n"
                    )
                    
                    conn.sendall(respuesta.encode('utf-8')) #se manda toda la respuesta codificada 
                    print("Respuesta enviada al cliente")
                    
        except Exception as e:
                    print(f" Error: {e}")
                    
if __name__ == "__main__":
    main()