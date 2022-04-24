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

int regreso(int tam, char caracteres[tam], char *caracter, char objetivo);
int main(){
    int tam;
    printf("Dame el tamaño del arreglo: \t");
    scanf("%d",&tam);
    char caracteres[tam], objetivo, caracter = 'a';

    for (int i = 0; i < tam; ++i) {
        printf("Dame un caracter: ");
        scanf("%s",&caracteres[i]);
    }

    printf("Ahora dame un caracter objetivo: ");
    scanf("%s",&objetivo);

    int res = regreso(tam, caracteres, &caracter, objetivo);
    if(res){
        printf(" '%c' ",caracter);
    }
    else{
        printf(" '%c' ",caracter);
    }


    return 0;
}
int regreso(int tam,char caracteres[tam], char *caracter, char objetivo){
    int centro, primero, ultimo, central;
    primero=0;
    ultimo=tam-1;
    while(primero <= ultimo){
        centro = (primero + ultimo) /2 ;
        central = caracteres[centro];
        if(objetivo == central){
            *caracter = caracteres[centro+1];
            return 1;
        }
        else if(objetivo < central){
            *caracter = caracteres[centro];
            ultimo = centro-1;
        }
        else{
            *caracter = caracteres[centro];
            primero = centro+1;
        }
    }

    if(objetivo > caracteres[tam-1]){
        *caracter = caracteres[0];
        return 1;
    }

    return 0;
}