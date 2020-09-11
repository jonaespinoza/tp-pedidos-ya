/*
 * cliente.c
 *
 *  Created on: 10 sep. 2020
 *      Author: utnso
 */

#include "cliente.h"

int main(void){

	t_log* logCliente = leer_log();

	t_config* configCliente = config_create("cliente.config");

	//Conectarse a Sindicato
	int conexion_sindicato = crear_conexion(
								config_get_string_value(configCliente, "IP_SINDICATO"),
								config_get_int_value(configCliente, "PUERTO_SINDICATO")
							);



}

t_log* leer_log(void){
	return log_create("cliente.log","cliente.log",1,LOG_LEVEL_INFO);
}
