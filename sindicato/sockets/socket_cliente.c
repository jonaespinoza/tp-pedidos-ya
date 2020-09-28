/*
 * socket_cliente.c
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */


#include "socket_cliente.h"

int crear_conexion(char *ip, int *puerto, t_log* logger)
{
	struct sockaddr_in dirCliente;

	dirCliente.sin_family = AF_INET;
	dirCliente.sin_addr.s_addr = inet_addr(ip);
	dirCliente.sin_port = htons(puerto);
	memset(&(dirCliente.sin_zero), '\0', 8);

	int socket_cliente = socket(AF_INET,SOCK_STREAM,0);

	if(connect(socket_cliente,(struct sockaddr *)&dirCliente, sizeof(struct sockaddr)) == -1){

		log_error(logger,"No se pudo crear conexion.");

		free(socket_cliente);

		exit(EXIT_FAILURE);

	}

	log_debug(logger,"Se estableció conexión con: ");

	return socket_cliente;
}

