/*
 * socket_servidor.c
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */

#include "socket_servidor.h"

int iniciar_servidor(t_config* config){
	struct sockaddr_in dirServidor;

	int socket_servidor;

	int puerto_escucha = config_get_int_value(config,"PUERTO_ESCUCHA");
	char *ip = config_get_string_value(config,"IP");

    dirServidor.sin_family = AF_INET;
    dirServidor.sin_addr.s_addr = inet_addr(ip);
    dirServidor.sin_port = htons(puerto_escucha);
    memset(&(dirServidor.sin_zero), '\0', 8);

    int yes = 1;

    if ((socket_servidor = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
    	perror("Error de servidor.");
    	exit(1);
    }

    setsockopt(socket_servidor,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int));

    if (bind(socket_servidor, (void *)&dirServidor, sizeof(dirServidor)) != 0){
    	perror("Bind Error");
    	exit(1);
    }

    if (listen(socket_servidor, SOMAXCONN) == -1) {
    	perror("Listen Error.");
    	exit(1);
    }


    return socket_servidor;
}

int recibir_conexion(int socket_servidor){

	struct sockaddr_in dirCliente;

	int tam_direccion = sizeof(struct sockaddr_in);

	int socket_cliente = accept(socket_servidor, (void*)&dirCliente, &tam_direccion);

	for(;;);

	return socket_cliente;

}
