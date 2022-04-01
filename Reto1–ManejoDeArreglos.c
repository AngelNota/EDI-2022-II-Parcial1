//
// Created by angelnota on 01/04/22.
//

/*
 * Producto del arreglo excepto el mismo
 * Dado un arreglo de enteros nums, realice una función que regrese un arreglo respuesta
 * en el cual cada elemento respuesta[i] deberá ser igual al producto de todos los elementos de nums excepto nums[i].
 * Ejemplo 1:
 * Entrada:  nums = [1, 2, 3, 4]
 * Salida:  [24, 12, 8, 6]
 * Ejemplo 2:
 * Entrada:  nums = [-1, 1, 0, -3, 3]
 * Salida:  [0, 0, 9, 0, 0]
 * Restricciones:
 * -30 <= nums[i] <= 30
 *
 */

#include "stdio.h"
void llenar(int tam, int nums[tam]);
void producto(int tam, int nums[tam], int res[tam]);
int main(){
    int tam;
    printf("Dame el tamaño del arreglo\t");
    scanf("%d",&tam);
    int nums[tam], res[tam];


    llenar(tam, nums);
    producto(tam, nums, res);
    for (int i = 0; i < tam; ++i) {
        printf("%d ",res[i]);
    }
}
void llenar(int tam, int nums[tam]){
    for (int i = 0; i < tam; ++i) {
        do{
            printf("Dame un numero: ");
            scanf("%d",&nums[i]);
        }while (nums[i] >=  30 || nums[i] <= -30);
    }
}
void producto(int tam, int nums[tam], int res[tam]){
    int aux;
    for (int i = 0; i < tam; ++i) {
        aux=1;
        for (int j = 0; j < tam; ++j) {
            if(j != i){
                aux = nums[j] * aux;
            }
        }
        res[i]=aux;
    }
}