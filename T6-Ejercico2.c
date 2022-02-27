//
// Created by angelnota on 26/02/22.
//

/*
 * Modifique el programa anterior para que pida al usuario números a validar hasta que el número que capture sea 0.
 *
 */

#include <stdio.h>
void NumeroPerfect(int Numero, int *valido);
int main(){
    int Numero, valido;
    do{
        printf("Dame un numero\n");
        scanf("%d",&Numero);

        NumeroPerfect(Numero, &valido);

        if(valido == 1)
        {
            printf("El numero %d si es perfecto\n",Numero);
        }
        else {
            printf("El numero %d no perfecto\n", Numero);
        }
    }while(Numero != 0);
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