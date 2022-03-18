#include "gato.h"
#include "animal.h"
#include <stdio.h>

typedef struct
{
    animal_t animal;
    char *tipoMaullido;
}gato_t;

gato_t gato;

void maullar()
{
    printf("El gato esta maullando \n");
}

void gato_comer()
{
    printf("EL gato esta comiendo \n");
}
void gato_guardarId(int id)
{
    gato.animal.id;
}
int gato_obtenerId()
{
    return gato.animal.id;
}
void guardarTipoMaullido(char *tipoMaullido)
{
    gato.tipoMaullido = tipoMaullido;
}
char* obtenerTipoMaullido()
{
    return gato.tipoMaullido;
}