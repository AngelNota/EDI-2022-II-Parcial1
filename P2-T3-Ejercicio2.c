//
// Created by angelnota on 23/03/22.
//

/*
 * Dado un arreglo de enteros num, de tamaño n, realice una función que devuelva  el elemento
 * que aparezca mas veces dentro del arreglo.
 * Ejemplo 1:
 * Entrada:  nums = [3, 2, 3]
 * Salida:  3
 * Explicación:  El 3 aparece dos veces dentro del arreglo y el 2 solo una vez.
 * Ejemplo 2:
 * Entrada:  nums = [2, 2, 1, 1, 1, 2, 2]
 * Salida:  2
 * Explicación:  El 2 aparece mas veces que el 1.
 * Ejemplo 3:
 * Entrada:  nums = [1, 3, 1, 4, 3, 2, 1, 3, 2, 1]
 * Salida:  1
 * Explicación:  El 1 parece mas veces que todos los demás dentro del arreglo.
 *
 */

#include "stdio.h"

void aparecemas(int n, int nums[n], int *num);
int main(){
    int n, num;
    printf("De que tamaño es tu arreglo? ");
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; ++i) {
        printf("Dame un numero: ");
        scanf("%d", &nums[i]);
    }

    aparecemas(n, nums, &num);
    printf("El numero que mas aparece es el: \t%d",num);

    return 0;
}
void aparecemas(int n, int nums[n], int *num){
    int acumulador = 0, acumulador1 = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(nums[j] == nums[i]){
                acumulador = acumulador + 1;
            }
        }
        acumulador1 = acumulador;
        if (acumulador >= acumulador1){
            *num = nums[i];
        }
    }
}