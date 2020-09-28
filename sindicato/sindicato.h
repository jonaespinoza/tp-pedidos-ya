/*
 * sindicato.h
 *
 *  Created on: 19 sep. 2020
 *      Author: utnso
 */

#ifndef SINDICATO_H_
#define SINDICATO_H_

#include<stdio.h>
#include<stdlib.h>
#include<commons/log.h>
#include<commons/string.h>
#include<commons/config.h>
#include<readline/readline.h>
#include"sockets/socket_cliente.h"
#include"sockets/socket_servidor.h"
#include<pthread.h>
#include<semaphore.h>

pthread_t h1,h2;
sem_t sem1;
void servidor_sindicato(void);


#endif /* SINDICATO_H_ */
