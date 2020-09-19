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
	if (crear_conexion(config_get_string_value(configCliente, "IP_SINDICATO"),config_get_int_value(configCliente, "PUERTO_SINDICATO"))==-1){
							log_error(logCliente, "No se pudo establecer conexión con Sindicato");
	} else {
	int conexion_sindicato = crear_conexion(
								config_get_string_value(configCliente, "IP_SINDICATO"),
								config_get_int_value(configCliente, "PUERTO_SINDICATO")
							);
	log_trace(logCliente, "Se estableció conexión con Sindicato");
	}

	//Conectarse a App
	if (crear_conexion(config_get_string_value(configCliente, "IP_APP"),config_get_int_value(configCliente, "PUERTO_APP"))==-1){
							log_error(logCliente, "No se pudo establecer conexión con App");
	} else {
	int conexion_sindicato = crear_conexion(
								config_get_string_value(configCliente, "IP_APP"),
								config_get_int_value(configCliente, "PUERTO_APP")
							);
	log_trace(logCliente, "Se estableció conexión con App");
	}

	//Conectarse a CoMAnda
	if (crear_conexion(config_get_string_value(configCliente, "IP_COMANDA"),config_get_int_value(configCliente, "PUERTO_COMANDA"))==-1){
							log_error(logCliente, "No se pudo establecer conexión con Comanda");
	} else {
	int conexion_sindicato = crear_conexion(
								config_get_string_value(configCliente, "IP_COMANDA"),
								config_get_int_value(configCliente, "PUERTO_COMANDA")
							);
	log_trace(logCliente, "Se estableció conexión con Comanda");
	}

	//Conectarse a Restaurante
	if (crear_conexion(config_get_string_value(configCliente, "IP_RESTAURANTE"),config_get_int_value(configCliente, "PUERTO_RESTAURANTE"))==-1){
							log_error(logCliente, "No se pudo establecer conexión con Restaurante");
	} else {
	int conexion_sindicato = crear_conexion(
								config_get_string_value(configCliente, "IP_RESTAURANTE"),
								config_get_int_value(configCliente, "PUERTO_RESTAURANTE")
							);
	log_trace(logCliente, "Se estableció conexión con Restaurante");
	}

}

t_log* leer_log(void){
	return log_create("cliente.log","cliente.log",1,LOG_LEVEL_INFO);
}
