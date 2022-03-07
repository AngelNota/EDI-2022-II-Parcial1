//
// Created by angelnota on 02/03/22.
//

/*
 * Realice un programa en C que solicite MAX enteros entre 1 y 100, los almacene en un arreglo y realice las siguientes funciones:
 * Función que regrese la suma de los valores de las posiciones pares del arreglo.
 * Función que regrese la suma de los valores pares del arreglo.
 * Función que sume los valores en el arreglo mientras la suma no sobrepase 100.  La función debe regresar la suma y la
 * cantidad de números que sumó.
 * El main deberá imprimir el resultado de cada función.
 *
 */

#include <stdio.h>
#define MAX 20
void SumaPosiciones(int arreglo[MAX],int *SumaPosicion);
void SumaPares(int arreglo[MAX], int *SumaPares);
void SumaCien(int arreglo[MAX], int *SumaCienn, int *NumerosQSumo);
int main(){
    int arreglo[MAX], SumaPosicion=0, SumaPar=0, SumaCienn=0, NumerosQSumo=0, i;

    for(i=0;i<MAX;i++){
        printf("Dame un numero entre 1 y 100");
        scanf("%d", &arreglo[i]);
    }

    SumaPosiciones(arreglo, &SumaPosicion);
    SumaPares(arreglo, &SumaPar);
    SumaCien(arreglo,&SumaCienn, &NumerosQSumo);

    printf("Suma de los valores de las posiciones pares del arreglo = %d \n"
           "Suma de los valores pares del arreglo = %d \n"
           "Suma de los valores del arreglo que no pasen de 100 = %d cantidad de numeros que sumo = %d",SumaPosicion, SumaPar, SumaCienn, NumerosQSumo );

    return 0;
}
void SumaPosiciones(int arreglo[MAX],int *SumaPosicion){
    int i;
    for(i=0;i<MAX;i++){
        if(i%2 == 0){
            *SumaPosicion=*SumaPosicion+arreglo[i];
        }
    }
}
void SumaPares(int arreglo[MAX], int *SumaPar){
    int i;
    for(i=0;i<MAX;i++){
        if(arreglo[i]%2 == 0){
            *SumaPar=*SumaPar+arreglo[i];
        }
    }
}
void SumaCien(int arreglo[MAX], int *SumaCienn, int *NumerosQSumo){
    int i=0;
    do{
        *SumaCienn = arreglo[i] + *SumaCienn;
        *NumerosQSumo = *NumerosQSumo + 1;
     i++;
    }while(*SumaCienn<100);
}