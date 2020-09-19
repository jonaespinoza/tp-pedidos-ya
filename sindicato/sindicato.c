/*
 * sindicato.c
 *
 *  Created on: 19 sep. 2020
 *      Author: utnso
 */

#include"sindicato.h"

#include "utils.h"

int main(void){

	t_log* logSindicato = leer_log();

	t_config* configSindicato = config_create("sindicato.config");

	int socket_sindicato = iniciar_servidor(configSindicato);

	log_trace(logSindicato, "SERVIDOR: Esperando conexión.");

	char *ip_server = config_get_string_value(configSindicato, "IP");
	int puerto_server = config_get_int_value(configSindicato, "PUERTO_ESCUCHA");

	//Conectarse a Servidor
	if (crear_conexion(ip_server,puerto_server)==-1){
		log_error(logSindicato, "No se pudo establecer conexión con servidor");
	} else {
		int conexion_sindicato = crear_conexion(ip_server,puerto_server);
		log_trace(logSindicato, "Se estableció conexión con servidor");
	}

}


