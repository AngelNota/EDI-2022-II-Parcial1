//
// Created by angelnota on 21/03/22.
//
/*
 * Dado un arreglo ordenado de enteros diferentes y un valor objetivo, regresa el indice del objetivo
 * si se encuentra dentro del arreglo, si no, regresa el indice donde debería estar si fuera agregado al arreglo en orden.
 * Ejemplo 1:
 * Entrada:  nums = [1, 3, 5, 6], objetivo = 5
 * Salida:  2
 * Ejemplo 2:
 * Entrada:  nums = [1, 3, 5, 6], objetivo = 2
 * Salida:  1
 * Ejemplo 3:
 * Entrada:  letras = [1, 3, 5, 6], objetivo = 7
 * Salida:  4
 *
 */
#include "stdio.h"
#define n 4
int regreso(int nums[n], int objetivo, int *indice);
int main(){
    int nums[n], objetivo, indice;
    printf("Escribe el arreglo ordenado, por favor\n");
    for (int i = 0; i < n; ++i) {
        printf("Dame el primer numero: ");
        scanf("%d",&nums[i]);
    }

    printf("¿Cual es tu numero objetivo?: ");
    scanf("%d",&objetivo);
    int reg = regreso(nums, objetivo, &indice);
    if(reg){
        printf("El numero %d esta en la posicion %d", objetivo, indice);
    }
    else{
        printf("El numero %d deberia de estar en la posicion %d", objetivo, indice);
    }
}
int regreso(int nums[n], int objetivo,int *indice){
    for(int i = 0; i < n; ++i){
        if(nums[i] == objetivo){
            *indice = i+1;
            return 1;
        }
    }
    for(int i = 0; i < n; ++i){
        if(nums[i] < objetivo && nums[i+1] > objetivo){
            *indice = i+2;
            return 0;
        }
    }
}
