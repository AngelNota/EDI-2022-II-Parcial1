//
// Created by angelnota on 01/04/22.
//

/*
 *  Conversión decimal a hexadecimal
 *  Dado un número decimal construya una función que convierta dicho número en una cadena que represente
 *  el valor del número en hexadecimal (base 16).
 *  Nota: Un cambio de base se realiza mediante divisiones sucesivas por 16 (para hexadecimal) en las
 *  cuales los restos determinan los dígitos hexadecimales del número según la siguiente tabla:
 *  Ejemplo:
 *  Si queremos convertir 65029 a hexadecimal
 *  El resultado será FE05
 *
 */

#include <stdio.h>
char *Hexadecimal(int numero, int *ii);
int main(){
    int numero, ii;

    printf("Ingresa un numero decimal: ");
    scanf("%d",&numero);

    char *hexa;
    hexa = Hexadecimal(numero, &ii);

    for(int j=ii;j>=0;j--){
        printf("%c",hexa[j]);
    }

    return 0;
}
char *Hexadecimal(int numero, int *ii){
    static char Hex[100];
    static int residuo,i=0;
    if(numero!= 0)
    {
        residuo=numero%16;
        if(residuo<10) {
            Hex[i++] = residuo + 48;
        }else{
            Hex[i++]=residuo+55;
        }
        Hexadecimal(numero/16, ii);
    }
    *ii = i;
    return Hex;
}

