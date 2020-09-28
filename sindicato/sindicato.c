/*
 * sindicato.c
 *
 *  Created on: 19 sep. 2020
 *      Author: utnso
 */

#include"sindicato.h"
#include"servidor_sindicato.h"

int main(void){

	pthread_create(&h1,NULL,*servidor_sindicato,NULL);
	pthread_join(h1,NULL);

	t_log* logSindicato = leer_log();

	t_config* configSindicato = config_create("sindicato.config");

	char *ip_server = config_get_string_value(configSindicato, "IP");
	int puerto_server = config_get_int_value(configSindicato, "PUERTO_ESCUCHA");

	int conexion = crear_conexion(ip_server,puerto_server,logSindicato);

	return 0;

}


