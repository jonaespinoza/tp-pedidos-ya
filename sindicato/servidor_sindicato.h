/*
 * servidor_sindicato.h
 *
 *  Created on: 7 sep. 2020
 *      Author: utnso
 */

#ifndef SINDICATO_SERVIDOR_SINDICATO_H_
#define SINDICATO_SERVIDOR_SINDICATO_H_



#include<stdio.h>
#include<stdlib.h>
#include<commons/log.h>
#include<commons/string.h>
#include<commons/config.h>
#include<readline/readline.h>
#include"sockets/socket_servidor.h"
#include<pthread.h>
#include<semaphore.h>

t_config* leer_config(void);
t_log* leer_log(void);



#endif /* SINDICATO_SERVIDOR_SINDICATO_H_ */
