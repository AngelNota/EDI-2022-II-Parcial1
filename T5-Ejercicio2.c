//
// Created by angelnota on 14/02/22.
//
/*
 * Una frutería ofrece las manzanas con descuento según la siguiente tabla:
Numero de kilos comprados % Descuento
0 – 2                           0%
2.01 – 5                        10%
5.01 – 10                       15 %
10.01 en adelante               20%
Dado el precio por kilo, y el peso, determinar cuánto pagará una persona que compre manzanas es esa frutería.
 */

#include <stdio.h>

int main(){
    float kilo, desc, manz;

    printf("¿Cuantos kilos compraste?");
    scanf("%f",&kilo);

    printf("¿cual es el presio de la manzana?");
    scanf("%f",&manz);
    if(kilo >= 0 && kilo <= 2){
        desc=manz*kilo;
        printf("El precio a pagar es: %.2f", desc);
    }
    else if (kilo >= 2.01 && kilo <= 5){
        desc=(manz*kilo)-((manz*.10)*kilo);
        printf("El precio a pagar es: %.2f", desc);
    }
    else if (kilo >= 5.01 && kilo <= 10){
        desc=(manz*kilo)-((manz*.15)*kilo);
        printf("El precio a pagar es: %.2f", desc);
    }
    else if (kilo >= 10.01){
        desc=(manz*kilo)-((manz*.20)*kilo);
        printf("El precio a pagar es: %.2f", desc);
    }
}
