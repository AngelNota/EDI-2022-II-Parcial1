//
// Created by angelnota on 04/02/22.
//

/*
 *  Escriba un programa que pida el precio de un producto (puede tener decimales) y el porcentaje de descuento.
 *  Calcule el precio del producto con el descuento y lo imprima con 2 decimales.  Por ejemplo:
 *  Si el usuario captura el precio de 99.99 y el 25 por ciento de descuento,
 *  el programa debe de decir que el precio con descuento es:  74.99.
 *   
 *
 * */
#include <stdio.h>

int main(){
    float producto, desc, precio;

    printf("Dame el precio del producto\n");
    scanf("%f",&producto);
    printf("Dame el porcentaje de descuento\n");
    scanf("%f",&desc);

    desc=desc/100;
    precio=producto*desc;
    precio=producto-precio;
    printf("El precio con descuento es: %.2f",precio);
    return 0;
}