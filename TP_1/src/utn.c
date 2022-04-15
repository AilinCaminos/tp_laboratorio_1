#include <stdio.h>
#include <stdlib.h>

float utn_calcularTarjetaDebito(float precio){

    float descuento;
    float precioConDescuento;

    descuento = precio * 0.10;

    return precioConDescuento = precio - descuento;

}
float utn_calcularTarjetaCredito(float precio){

    return precio = precio * 1.25;

}

float utn_calcularBitcoin(float precio){

  return precio = precio / 4606954.55;

}
float utn_precioUnitario(float precio){

    return precio;
}

float utn_calcularDiferencia(float precioAerolineas, float precioLatam){

    float precio;

    if(precioAerolineas >= precioLatam){
        precio = precioAerolineas - precioLatam;
    }else{
        precio = precioLatam - precioAerolineas;
    }

    return precio;
}

void utn_calcular(float precioLatam, float precioAerolineas){

    float precioAerolineasDebito;
    float precioLatamDebito;
    float precioAerolineasCredito;
    float precioLatamCredito;
    float precioAerolineasBitcoin;
    float precioLatamBitcoin;
    float precioUnitarioLatam;
    float precioUnitarioAerolineas;
    float precioDiferencia;


    if(precioLatam > 0 || precioAerolineas > 0){

        precioAerolineasDebito = utn_calcularTarjetaDebito(precioAerolineas);
        precioLatamDebito = utn_calcularTarjetaDebito(precioLatam);
        precioAerolineasCredito = utn_calcularTarjetaCredito(precioAerolineas);
        precioLatamCredito = utn_calcularTarjetaCredito(precioLatam);
        precioAerolineasBitcoin = utn_calcularBitcoin(precioAerolineas);
        precioLatamBitcoin = utn_calcularBitcoin(precioLatam);
        precioUnitarioLatam = utn_precioUnitario(precioLatam);
        precioUnitarioAerolineas = utn_precioUnitario(precioAerolineas);
        precioDiferencia = utn_calcularDiferencia(precioAerolineas, precioLatam);

        printf("Latam: \n");
        printf("El precio con tarjeta de debito: %.2f \n", precioLatamDebito);
        printf("El precio con tarjeta de credito: %.2f \n", precioLatamCredito);
        printf("El precio pagando con bitcoin: %f \n", precioLatamBitcoin);
        printf("Precio unitario: %.2f \n", precioUnitarioLatam);
        printf("Aerolineas: \n");
        printf("El precio con tarjeta de debito: %.2f \n", precioAerolineasDebito);
        printf("El precio con tarjeta de credito: %.2f \n", precioAerolineasCredito);
        printf("El precio pagando con bitcoin: %f \n", precioAerolineasBitcoin);
        printf("Precio unitario: %.2f \n", precioUnitarioAerolineas);
        printf("La diferencia es: %.2f \n", precioDiferencia);

    }

}
