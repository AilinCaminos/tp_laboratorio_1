/*
 * utn.h
 *
 *  Created on: 15 abr. 2022
 *      Author: ailin
 */

#ifndef UTN_H_
#define UTN_H_

float utn_calcularTarjetaDebito(float precio);
float utn_calcularTarjetaCredito(float precio);
float utn_calcularBitcoin(float precio);
float utn_precioUnitario(float precio);
float utn_calcularDiferencia(float precioAerolineas, float precioLatam);
void utn_calcular(float precioLatam, float precioAerolineas);

#endif /* UTN_H_ */
