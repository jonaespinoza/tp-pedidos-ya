/*
 * socket_servidor.h
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */

#ifndef SOCKETS_SOCKET_SERVIDOR_H_
#define SOCKETS_SOCKET_SERVIDOR_H_

#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
#include<sys/socket.h>
#include<netdb.h>
#include<string.h>
#include<commons/config.h>
#include<commons/log.h>

t_config* config;
t_log* log;
int iniciar_servidor(t_config*, t_log*);
int recibir_cliente(int socket_servidor);

#endif /* SOCKETS_SOCKET_SERVIDOR_H_ */
