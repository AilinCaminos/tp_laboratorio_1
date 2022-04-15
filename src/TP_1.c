/*
 ============================================================================
 Name        : TP_1.c
 Author      : Ailin Mabel Caminos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EXIT_STATUS 0

int main(void) {

    float kilometroIngresado;
    float precioAerolineas;
    float precioLatam;


    printf("Ingrese la cantidad de kilometros: \n");
    scanf("%f", &kilometroIngresado);

    printf("Ingresar precio para Aerolineas\n");
    scanf("%f", &precioAerolineas);

    printf("Ingresar precio para Latam\n");
    scanf("%f", &precioLatam);

    utn_calcular(precioLatam, precioAerolineas);

    return EXIT_STATUS;

}
