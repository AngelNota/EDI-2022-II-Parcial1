//
// Created by angelnota on 08/02/22.
//

/*
 * Escribe un programa que pida al usuario la cantidad de segundos e imprima el número de
 * días, horas, minutos y segundos que son: Por ejemplo:
 * Segundos:  765925
 * El programa deberá imprimir:
 * Días: 8
 * Horas: 20
 * Minutos: 45
 * Segundos: 25
 *
 */
#include <stdio.h>
int main(){
    int dia=86400, hor=3600, min=60, segu, r_dia, r_hor;

    printf("Dame los segundos\n");
    scanf("%d",&segu);

    r_dia=(segu % dia);
    r_hor=(segu % hor);
    dia=(segu / dia);
    hor=(r_dia / hor) ;
    min=(r_hor/ min);
    segu=(segu % 60 );
    printf(" Dias: %d \n Horas: %d\n Minutos: %d\n Segundos: %d",dia,hor,min,segu);
    return 0;
}