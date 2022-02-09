//
// Created by angelnota on 08/02/22.
//
/*
 * Escribe un programa que pida al usuario días, horas y minutos.  Calcule la cantidad total de segundos
 * y los imprima como en el ejemplo:
 * Si el usuario captura:
 * Días:  1
 * Horas: 4
 * Minutos:  35
 * El programa deberá imprimir:
 * 1 día, 4 horas y 35 minutos son:  102900 segundos.
 */

#include <stdio.h>

int main(){
    int dia, hor, min, segu;

    printf("Dame los dias\n");
    scanf("%d",&dia);
    printf("Dame las horas\n");
    scanf("%d",&hor);
    printf("Dame los minutos\n");
    scanf("%d",&min);

    segu=(dia*86400)+(hor*3600)+(min*60);
    printf("%d dia, %d horas y %d minutos son: %d segundos.",dia,hor,min,segu);
    return 0;
}