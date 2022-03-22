//
// Created by angelnota on 21/03/22.
//

/*
 * Búsqueda en un arreglo de cadenas.   Realice un programa en C que pida una lista de nombres al usuario,
 * además solicite otro, y regrese el índice donde se encuentra el nombre y si no regrese un –1.
 * Requerimientos:
 * Realice una función para solicitar los nombres al usuario.
 * Realice una función para buscar el nombre dentro de la lista.
 * La función deberá regresar un 1 si encontró el nombre y un 0 si no.
 * Ejemplo 1:
 * Entrada:  nombres = ["Mirna", "Luis", "Moises", "Fernanda"]
 * objetivo = "Luis"
 * Salida:  1
 * Ejemplo 2:
 * Entrada:  nombres = ["Mirna", "Luis", "Moises", "Fernanda"]
 * objetivo = "María"
 * Salida:  -1
 * Ejemplo 3:
 * Entrada:  nombres = ["Mirna", "Luis", "Moises", "Fernanda"]
 * objetivo = "Fernanda"
 * Salida:  3
 *
 */
#include "string.h"
#include "stdio.h"
#define n 4
void solicitar(char Cadena[n][10], char Nombre[10]);
int buscar(char Cadena [n][10], char Nombre[10], int *indice);
int main(){
    char Cadena[n][10], Nombre[10];
    int indice;
    solicitar(Cadena, Nombre);
    int resultado = buscar(Cadena, Nombre, &indice);
    if (resultado){
       printf("El nombre: '%s' esta en la posición %d \n",Nombre, indice);
    }
    else{
       printf("-1");
    }
    getchar();
}
void solicitar(char Cadena[n][10], char *Nombre){

    for (int i = 0; i < n; ++i) {
        printf("dame el nombre numero %d \n",i+1);
        scanf("%s",&Cadena[i]);
    }
    printf("¿Que nombre quieres buscar?\n");
    scanf("%s",Nombre);
}
int buscar(char Cadena[n][10], char Nombre[10], int *indice){
    for (int i = 0; i < n; ++i) {
        if(strcmp(Nombre, Cadena[i]) == 0){
            *indice = i+1;
            return 1;
        }
    }
    return 0;
}