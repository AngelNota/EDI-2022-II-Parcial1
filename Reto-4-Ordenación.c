//
// Created by angelnota on 01/04/22.
//
/*
 * Dados dos arreglos de enteros, nums1 y num2, ordenados de forma ascendente y dos enteros m y n
 * que representan el número de elementos en nums1 y nums2 respectivamente.
 * Mezcla nums1 y nums2 dentro de un arreglo simple ordenado de forma ascendente.
 * El arreglo final deberá ser un arreglo nuevo, cuya longitud será de m + n.
 * Ejemplo 1:
 * Entrada:  nums1 = [1, 2, 3], m = 3
 * nums2 = [2, 5, 6], n = 3
 * Salida:  [1, 2, 2, 3, 5, 6]
 * Ejemplo 2:
 * Entrada:  nums1 = [1], m = 1
 * nums2 = [], n = 0
 * Salida:  [1]
 * Ejemplo 3:
 * Entrada:  nums1 = [1, 6, 9, 12], m = 4
 *    nums2 = [2, 5, 6], n = 3
 *    Salida:  [1, 2, 5, 6, 6, 9, 12]
 * Consideraciones:
 * m y n no serán mayores a 100
 * m y n deberán ser solicitados al usuario
 *
 */

#include "stdio.h"
void LlenarArreglos(int tam1, int tam2, int arr1[tam1],int arr2[tam2]);
void menorAmayor(int tam1, int tam2, int tam3, int arr1[tam1],int arr2[tam2],int arr3[tam3]);
void Imprimir(int tam3,int arr3[tam3]);
int main(){
    int tam1, tam2, tam3;
    do{
        printf("Dame el tamaño del primer arreglo: ");
        scanf("%d",&tam1);
    } while (tam1<0 || tam1 > 100);
    do{
        printf("Dame el tamaño del segundo arreglo: ");
        scanf("%d",&tam2);
    }while (tam2<0 || tam2 > 100);

    tam3=tam1+tam2;
    int arr1[tam1], arr2[tam2], arr3[tam3];
    LlenarArreglos(tam1,tam2,arr1,arr2);
    menorAmayor(tam1,  tam2,  tam3, arr1, arr2, arr3);
    Imprimir(tam3,arr3);
}
void LlenarArreglos(int tam1, int tam2, int arr1[tam1],int arr2[tam2]){
    printf("Llena el arreglo 1 de forma ordenada: \n");
    for (int i = 0; i < tam1; ++i) {
        printf("Dame un numero: ");
        scanf("%d",&arr1[i]);
    }
    printf("Llena el arreglo 2 de forma ordenada: \n");
    for (int i = 0; i < tam2; ++i) {
        printf("Dame un numero: ");
        scanf("%d",&arr2[i]);
    }
}
void menorAmayor(int tam1, int tam2, int tam3, int arr1[tam1],int arr2[tam2],int arr3[tam3]){
    for (int i = 0; i < tam3; ++i)
    {
        if(i < tam1)
        {
            arr3[i] = arr1[i];
        }
        else if(i >= tam1 && i-tam1 < tam2)
        {
            arr3[i] = arr2[i-tam1];
        }
    }
    int auxiliar, menor;
    for (int i = 0; i < tam3; ++i) {
        auxiliar=i;
        for (int j = i; j < tam3; ++j) {
            if(arr3[j] < arr3[auxiliar]){
                auxiliar=j;
            }
        }
        menor=arr3[i];
        arr3[i]=arr3[auxiliar];
        arr3[auxiliar]=menor;
    }
}
void Imprimir(int tam3,int arr3[tam3]){
    printf("El arreglo ordenado es el siguiente :\n");
    for (int i = 0; i < tam3; ++i) {
        printf("%d ",arr3[i]);
    }
}