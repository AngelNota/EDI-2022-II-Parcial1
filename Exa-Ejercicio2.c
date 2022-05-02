//
// Created by angelnota on 26/04/22.
//
/*
 * Realice una función recursiva que invierta una cadena de caracteres.
 * Se tiene que modificar la cadena de entrada en el mismo arreglo, no
 * se debe crear una nueva cadena o solo imprimirla de forma inversa.
 *
 */
#include "stdio.h"
#include "string.h"
#define N 100

int inversa(char cadena[N], int inicio, int fin);
int main(){
    char cadena[N];

    printf("Ecribe una frase: ");
    scanf("%[A-ñ-z]",&cadena);

    int fin = strlen(cadena);
    int res = inversa(cadena, 0, fin - 1);
    if(res){
        printf(" '%s' ",cadena);
    }

}
int inversa(char cadena[N], int inicio, int fin){
    char ultimo, primero;
    if (inicio >= fin) return 1;

    if (inicio < fin) {
        ultimo = cadena[fin];
        primero = cadena[inicio];
        cadena[fin]=primero;
        cadena[inicio]=ultimo;
        return inversa(cadena, inicio + 1, fin - 1);
    } else {
        return 0;
    }
}