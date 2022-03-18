/*
 * File:   perro.c
 * Author: Usuario
 *
 * Created on 17 de marzo de 2022, 09:37 PM
 */


#include <xc.h>
#include <stdio.h>
#include "perro.h"

typedef struct 
{
    animal_t animal;
    char *tipoLadrido;
}perro_t;//clase hija 

perro_t perro; //declaramos al perro de tipo perro

void ladrar()
{
    printf("El perro esta ladrando\n");
}
void perro_comer()
{
    printf("El perro esta comiendo\n");
}
void perro_guardarId(int id)
{
    perro.animal.id = id; //asignamos el parametro local id
    //a traves del tipo perro accedemos al tipo animal y despues accedemos al atributo id
}
int perro_obtenerId()
{
    return perro.animal.id;
}
void guardarTipoLadrido(char *tipoLadrido)
{
    perro.tipoLadrido = tipoLadrido;
}
char* obtenerTipoLadrido()
{
    return perro.tipoLadrido;
}