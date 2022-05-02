//
// Created by angelnota on 26/04/22.
//
/*
 * Dados un arreglo de N alumnos (nombres) y un arreglo de promedios, donde cada elemento del
 * arreglo de promedios corresponda al promedio de un alumno en el arreglo de nombres.
 * Realice una función que ordene a los alumnos de forma descendente por promedio, utilizando el
 * algoritmo de su preferencia. (Donde 0 <N <=100)
 *
 */

#include "stdio.h"
#include "string.h"
#define N 3

void llenar(char alumnos[N][10], int promedios[N]);
void ordenar(char alumnos[N][10], int promedios[N]);
int main(){
    char alumnos[N][10];
    int promedios[N];

    llenar(alumnos, promedios);
    ordenar(alumnos, promedios);

    for (int i = 0; i < N; ++i) {
        printf(" '%s': %d \n", alumnos[i], promedios[i]);
    }
}
void llenar(char alumnos[N][10], int promedios[N]){
    for (int i = 0; i < N; ++i) {
        printf("Dame el nombre del primero alumno:\t ");
        scanf("%s",alumnos[i]);
    }
    for (int i = 0; i < N; ++i) {
        printf("Dame el promedio del alumno '%s':\t", alumnos[i]);
        scanf("%d",&promedios[i]);
    }
}
void ordenar(char alumnos[N][10], int promedios[N]){
    int prom, auxiliar;
    char alu[10];
    for (int i = 0; i < N; ++i) {
        auxiliar=i;
        for (int j = i; j < N; ++j) {
            if(promedios[j] > promedios[auxiliar]){
                auxiliar=j;
            }
        }
        prom=promedios[i];
        promedios[i]=promedios[auxiliar];
        promedios[auxiliar]=prom;

        memcpy(alu, alumnos[i], 10);
        // Movemos al actual el siguiente elemento
        memcpy(alumnos[i], alumnos[auxiliar], 10);
        // Y en el siguiente elemento, lo que había antes en el actual pero ahora está en temporal
        memcpy(alumnos[auxiliar], alu, 10);

    }
}
