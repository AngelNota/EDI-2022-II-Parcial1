//
// Created by angelnota on 23/03/22.
//

/*
 * Dado un arreglo de enteros num, realice una función que regrese 1 si cualquier valor dentro del
 * arreglo aparece dos veces o mas en el arreglo  y regrese 0 si cada elemento dentro del arreglo es distinto.
 * Ejemplo 1:
 * Entrada:  nums = [1, 2, 3, 1]
 * Salida:  1
 * Explicación:  El 1 aparece dos veces dentro del arreglo.
 * Ejemplo 2:
 * Entrada:  nums = [1, 4, 3, 2]
 * Salida:  0
 * Explicación:  Ningún valor se repite dentro del arreglo.
 * Ejemplo 3:
 * Entrada:  nums = [1, 3, 1, 4, 3, 2, 1, 3, 2]
 * Salida:  1
 * Explicación:  Existen valores que aparecen mas de una vez (Nota:  no es necesario saber que hay mas de uno que se repite).
 *
 */

#include "stdio.h"

int repetir(int num,int nums[num]);
int main(){
    int num;
    printf("De que tamaño es tu arreglo? ");
    scanf("%d", &num);
    int nums[num];

    for (int i = 0; i < num; ++i) {
        printf("Dame un numero: ");
        scanf("%d",&nums[i]);
    }

    int resultado = repetir(num, nums);
    if(resultado){
        printf("1");
    } else{
        printf("0");
    }
    return 0;
}
int repetir(int num,int nums[num]){
    for (int i = 0; i < num; ++i) {
        for (int j = i; j < num; ++j) {
            if(nums[i] == nums[j+1]){
                return 1;
            }
        }
    }
    return 0;
}
