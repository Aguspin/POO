  
#ifndef GATO_H
#define	GATO_H

#include "animal.h"

void maullar();
void gato_comer();
void gato_guardarId(int id);
int gato_obtenerId();
void guardarTipoMaullido(char *tipoMaullido);
char* obtenerTipoMaullido();

#endif	
