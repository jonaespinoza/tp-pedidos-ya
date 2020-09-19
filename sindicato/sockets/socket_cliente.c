/*
 * socket_cliente.c
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */


#include "socket_cliente.h"

int crear_conexion(char *ip, int *puerto)
{
	struct sockaddr_in dirServidor;

	dirServidor.sin_family = AF_INET;
	dirServidor.sin_addr.s_addr = inet_addr(ip);
	dirServidor.sin_port = htons(puerto);
	memset(&(dirServidor.sin_zero), '\0', 8);

	int socket_cliente = socket(AF_INET,SOCK_STREAM,0);

	if(connect(socket_cliente,(struct sockaddr *)&dirServidor, sizeof(struct sockaddr)) == -1){

		return -1;

	}

	return socket_cliente;
}

