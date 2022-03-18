/*
 * File:   main.c
 * Author: Usuario
 *
 * Created on 17 de marzo de 2022, 09:58 PM
 */


#include <xc.h>
#include <stdio.h>
#include "perro.h"

void main() {
    
    perro_guardarId(55);
    guardarTipoLadrido("agudo");
    
    gato_guardarId(60);
    guardarTipoMaullido("grave");
    
    printf("El id del perro es: %d\n",perro_obtenerId());
    printf("El tipo de ladrido es: %s\n",obtenerTipoLadrido());
    
     printf("\nEl id del gato es: %d\n",gato_obtenerId());
     printf("El tipo de maullido es: %s\n",obtenerTipoMaullido());
    while(1);
    return;
}
