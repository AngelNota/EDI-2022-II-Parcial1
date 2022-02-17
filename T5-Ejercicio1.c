//
// Created by angelnota on 14/02/22.
//
/*
Escriba un programa en C que solicite al usuario una hora (hora y minutos) y lo salude siguiendo estas condiciones:
Si la hora está entre las 0:00 y las 11:59 saludará con Buenos Días
Entre las 12:00 y las 17:50 saludará con Buenas Tardes
Entre las 18:00 y las 23:59 saludará con Buenas Noches
Cualquier otra opción dirá que la hora no es válida
*/
#include <stdio.h>

int main(){
    int hor;

    printf("Dame una hora y minutos \n");
    scanf("%d", &hor);

    if(hor >= 0 && 11 >= hor){
        printf("Buenos días");
    }
    else if(hor >= 12 && 17 >= hor){
        printf("Buenas tardes");
    }
    else if(hor >= 18 && 23 >= hor){
        printf("Buenas noches");
    }
    else if(hor >= 24 || 0 > hor){
        printf("La hora no es valida");
    }


    return 0;
}
