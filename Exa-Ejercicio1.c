//
// Created by angelnota on 25/04/22.
//
/*
 * Realice un programa en C que dado un arreglo ordenado de N enterosdiferentes y un valor objetivo,
 * regrese el índice si el valor objetivo existe dentro del arreglo, si no, regrese el índice donde
 * debería estar si fuera insertado enorden. (Donde 0 < N <=100).
 *
 */

#include "stdio.h"
void llenar(int N, int arr[N]);
int *regreso(int N, int arr[N],int objetivo);
int main(){
    int N;
    do {
        printf("¿De que tamaño quieres tu arreglo?\t");
        scanf("%d", &N);
    }while (N >=  100 || N < 0);
    int arr[N], objetivo, indice;

    llenar(N, arr);

    printf("Ahora dame un numero objetivo:\t");
    scanf("%d",&objetivo);

    indice = regreso(N, arr, objetivo);

    printf(" '%d' ",indice);
    return 0;
}
void llenar(int N, int arr[N]){
    for(int i=0;i < N;i++){
        do {
            printf("Dame un numero:\t");
            scanf("%d",&arr[i]);
        } while (arr[i] >=  100 || arr[i] < 0);
    }
}
int *regreso(int N, int arr[N], int objetivo){
    int centro, primero, ultimo, central;
    primero=0;
    ultimo=N-1;
    while(primero <= ultimo){
        centro = (primero + ultimo) / 2 ;
        central = arr[centro];
        if(objetivo == central){
            return centro;
        }
        else if(objetivo < central){
            ultimo = centro-1;
        }
        else{
            primero = centro+1;
        }
    }
    return centro+1;
}