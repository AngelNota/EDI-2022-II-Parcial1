//
// Created by angelnota on 23/03/22.
//

/*
 * Encontrar la letra mas pequeña mayor que la que la de entrada
 * Escriba un programa que dado un arreglo de caracteres letras que están ordenadas en orden
 * ascedente y un caracter objetivo, obt que te regrese el caracter mas pequeño en el arreglo
 * que sea mayor que el caracter objetivo.
 * Considere a las letras circulares.  Es decir si objetivo = 'z' y letras = ['a', 'b'], la respuesta deberá ser 'a'.
 * Ejemplo 1:
 * Entrada:  letras = ['c', 'f', 'j'], objetivo = 'a'
 * Salida:  'c'
 * Ejemplo 2:
 * Entrada:  letras = ['c', 'f', 'j'], objetivo = 'c'
 * Salida:  'f'
 * Ejemplo 3:
 * Entrada:  letras = ['c', 'f', 'j'], objetivo = 'd'
 * Salida:  'f'
 * Consideraciones:
 * El arreglo de letras solo contendrá letras minúsculas del alfabeto en inglés.
 * El arreglo letras estará ordenado en orden ascendente.
 * El arreglo contiene al menos dos caracteres diferentes.
 * El caracter objetivo es una letra minúscula del alfabeto en inglés.
 *
 */

#include "stdio.h"

int regreso(char caracteres[3], char *caracter, char objetivo);
int main(){
    char caracteres[3], objetivo, caracter = 'a';

    for (int i = 0; i < 3; ++i) {
        printf("Dame un caracter: ");
        scanf("%s",&caracteres[i]);
    }

    printf("Ahora dame un caracter objetivo: ");
    scanf("%s",&objetivo);

    int res = regreso(caracteres, &caracter, objetivo);
    if(res){
        printf(" '%c' ",caracter);
    }
    else{
        printf("No existe un caracter mas pequeño en el arreglo que sea mayor que el caracter '%c' ",objetivo);
    }


    return 0;
}
int regreso(char caracteres[3], char *caracter, char objetivo){

    if(objetivo > caracteres[2]){
        *caracter = caracteres[0];
        return 1;
    }

    if(objetivo <= caracteres[1]){
        for (int i = 0; i < 2; ++i) {
            if(objetivo < caracteres[i]){
                *caracter = caracteres[i];
                return 1;
            }
        }
    }
    else{
         if(objetivo < caracteres[2]){
             *caracter = caracteres[2];
             return 1;
         }

    }
    return 0;
}