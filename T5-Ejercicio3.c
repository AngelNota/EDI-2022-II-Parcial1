//
// Created by angelnota on 16/02/22.
//

/*
 * Lea los valores de los lados de un triángulo.  Determine y muestre un mensaje
 * correspondiente a su tipo (Equilátero, Isóceles o Escaleno)
 *
 * Equilátero: Todos sus lados son iguales. Isósceles: Dos de sus tres lados son de igual longitud.
 * Escaleno: Todos sus lados son de diferente longitud.
 *
 */

#include <stdio.h>

int main(){
    float LA, LB, LC;

    printf("Dame la longitud del lado A");
    scanf("%f",&LA);

    printf("Dame la longitud del lado B");
    scanf("%f",&LB);

    printf("Dame la longitud del lado C");
    scanf("%f",&LC);

    if (LA == LB && LA==LC){
        printf("Es un triangulo Equilátero");
    }
    else if ((LA == LB && LA!=LC) || (LA!=LB && LA==LC) || (LB!=LA && LB==LC)){
        printf("Es un triangulo Isósceles");
    }
    else if (LA != LB && LA!=LC && LB!=LC ){
        printf("Es un triangulo Escaleno");
    }
}