//
// Created by angelnota on 26/02/22.
//
/*
 * Realice un programa en C que imprima si un número dado por el usuario es un número perfecto.
 * Un número perfecto es un entero positivo que es igual a la suma de sus divisores, excluyendolo a si mismo.
 * Ejemplo:
 * Suponga que el número dado por el usuario es 6.  Los divisores exactos de 6 son: 3, 2, 1.
 * Como 3 + 2 + 1 = 6 entonces 6 es un número perfecto
 * Requerimientos:
 * Solicite al usuario el número a validar en el main
 * Realice una función que reciba en número, lo valide y regrese un 1 si es perfecto o un 0 en caso contrario.
 * Imprima en el main "El número __ es perfecto" si es perfecto, "El número __ no es perfecto"
 *
 */
#include <stdio.h>
void NumeroPerfect(int Numero, int *valido);
int main(){
    int Numero, valido;

    printf("Dame un numero");
    scanf("%d",&Numero);

    NumeroPerfect(Numero, &valido);

    if(valido == 1)
    {
        printf("El numero %d si es perfecto",Numero);
    }
    else {
        printf("El numero %d no perfecto", Numero);
    }
    return 0;
}

void NumeroPerfect(int Numero, int *valido){
    int i, contador;
    contador=0;
    for(i=1;i<Numero;i++){
        if ((Numero%i) == 0){
            contador=i+contador;
        }
    }

    if(contador == Numero){
        *valido = 1;
    }
    else
    {
        *valido = 0;
    }
}
