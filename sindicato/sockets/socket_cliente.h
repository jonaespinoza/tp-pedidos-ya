/*
 * socket_cliente.h
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */

#ifndef SOCKETS_SOCKET_CLIENTE_H_
#define SOCKETS_SOCKET_CLIENTE_H_

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netdb.h>
#include<string.h>
#include<commons/log.h>

t_log* logger;
int crear_conexion(char *ip, int* puerto, t_log* logger);

#endif /* SOCKETS_SOCKET_CLIENTE_H_ */
