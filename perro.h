
#ifndef PERRO_H
#define	PERRO_H

#include "animal.h"

void ladrar();
void perro_comer();
void perro_guardarId(int id);
int perro_obtenerId();
void guardarTipoLadrido(char *tipoLadrido);
char* obtenerTipoLadrido();
#endif	

