//
// Created by angelnota on 26/02/22.
//

/*
 *  Realice un programa en C que pida N números al usuario e imprima el mayor y el menor de los números capturados (No use arreglos).
 *  Ejemplo:
 *  Suponiendo N = 10
 *  Datos del usuario: 15 7 9 34 8 3 22 4 27 6
 *  El resultado será:  menor = 3, mayor = 34
 *  Requerimientos:
 *  N deberá ser una constante.  Ejecute su programa con N = 10, 15 y 20.
 *  Realice una función que pida los números y regrese al main los valores mayor y menor.
 *  Imprima en el main los valores mayor y menor.
 */
#include <stdio.h>

#define N 10
void PideNumeros(int Numeros, int *Mayor, int *Menor);
int main(){
    int Numeros, Mayor=0, Menor=100000;

    PideNumeros(Numeros, &Mayor, &Menor);

    printf("Numero menor = %d, Numero mayor = %d",Menor, Mayor);
    return 0;
}

void PideNumeros(int Numeros, int *Mayor, int *Menor)
{
    int aumento;
    aumento=0;
    while(aumento < N)
    {
        printf("Dame un numero\n");
        scanf("%d", &Numeros);

        if(Numeros < *Menor){
            *Menor=Numeros;
        }
        else if(Numeros > *Mayor)
        {
            *Mayor=Numeros;
        }
        aumento++;
    }
}