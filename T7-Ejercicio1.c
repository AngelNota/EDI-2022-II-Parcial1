//
// Created by angelnota on 02/03/22.
//
/*
 *  Realice un programa en C que solicite una cadena de caracteres al usuario (puede tener espacios) y un caracter
 *  y que imprima el número de veces que ese caracter aparece en la cadena.
 *  Ejemplo:
 *  Cadena:  "El éxito es la suma de pequeños esfuerzos repetidos día tras día"
 *  Caracter: 'a'
 *  Resultado:  El caracter a aparece 5 veces en la cadena
 *  Requerimientos:
 *  El máximo tamaño de la cadena será de 100 caracteres
 *  Realice una función que pida la cadena al usuario
 *  Realice una función que pida el caracter al usuario
 *  Realice una función que reciba la cadena y el caracter y regrese el número de veces que el caracter aparece en la cadena
 *  Imprima el resultado en el main
 *
 */

#include <stdio.h>
#define Limite 100
#define Limite2 1
void PedirCadena(char cadena[Limite]);
void Caracter(char caracter[Limite2]);
void NumeroDeVeces(char cadena[Limite], char caracter[Limite2], int *VecesQueAparece);
int main(){
    char cadena[Limite];
    char caracter[Limite2];
    int VecesQueAparece=0;

    PedirCadena(cadena);
    fflush(stdin);
    Caracter(caracter);
    NumeroDeVeces(cadena, caracter, &VecesQueAparece);
    printf("El caracter %s aparece %d veces en la cadena", caracter, VecesQueAparece);
    return 0;
}

void PedirCadena(char cadena[Limite])
{
    printf("Escribe una frase\n");
    scanf("%[A-ñ-z ]", cadena);
}

void Caracter(char caracter[Limite2]){
    printf("Dame un caracter: ");
    scanf("%s", caracter);
}

void NumeroDeVeces(char cadena[Limite], char caracter[Limite2], int *VecesQueAparece){
    int i;
    for(i=0;i<Limite;i++){
        if (caracter[0] == cadena[i]){
            *VecesQueAparece= *VecesQueAparece + 1;
        }

    }
}