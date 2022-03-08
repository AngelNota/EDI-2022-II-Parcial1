//
// Created by angelnota on 07/03/22.
//

/*
 *     Lea dos matrices de enteros de N x M. (arreglos bidimensionales)
 *     Realice una función para capturar un arreglo bidimensional
 *     Realice una función que sume las dos matrices y regrese una tercera matriz con el resultado de la suma.
 *     Suponiendo que N = 3 y M = 4
 *     Realice una función que obtenga el promedio de los renglones de una matriz y los guarde en un arreglo (verifique el tipo de dato del arreglo).
 *     Realice una función que obtenga el promedio de las columnas de una matriz y los guarde en otro arreglo.
 */

#include <stdio.h>
#define Col 3
#define Ren 4
void Capturar(int MatrizA[Ren][Col], int MatrizB[Ren][Col]);
void Suma(int MatrizA[Ren][Col], int MatrizB[Ren][Col], int MatrizC[Ren][Col]);
void PromedioRenglones(int MatrizC[Ren][Col], float PromedioR[Ren]);
void PromedioColumnas(int MatrizC[Ren][Col], float PromedioC[Col]);
int main(){
    int MatrizA[Ren][Col], MatrizB[Ren][Col], MatrizC[Ren][Col];
    float PromedioR[Ren], PromedioC[Col];

    Capturar(MatrizA, MatrizB);
    Suma(MatrizA, MatrizB, MatrizC);

    printf("La matriz resultante es: \n");

    for(int i=0; i<Ren;i++){
        for(int j=0; j<Col; j++){
            printf("%d ",MatrizC[i][j]);
        }
        printf(" \n");
    }
    PromedioRenglones(MatrizC, PromedioR);
    PromedioColumnas(MatrizC, PromedioC);
}
void Capturar(int MatrizA[Ren][Col], int MatrizB[Ren][Col]){
    for(int i=0;i<Ren;i++){
        for (int j = 0; j < Col; ++j) {
            printf("Dame un valor para la matriz A: ");
            scanf("%d",&MatrizA[i][j]);
            printf("Dame un valor para la matriz B: ");
            scanf("%d",&MatrizB[i][j]);
        }
    }
}
void Suma(int MatrizA[Ren][Col], int MatrizB[Ren][Col], int MatrizC[Ren][Col]){
    for(int i=0; i<Ren;i++){
        for(int j=0; j<Col; j++){
            MatrizC[i][j]=MatrizA[i][j]+MatrizB[i][j];
        }
    }
}
void PromedioRenglones(int MatrizC[Ren][Col], float PromedioR[Ren]){
    float contador;
    for(int i=0; i<Ren;i++){
        contador=0;
        for(int j=0; j<Col; j++){
            contador=contador+MatrizC[i][j];
        }
        PromedioR[i]=contador/Col;
    }
    printf("Promedio de renglones \n");
    for (int a=0; a<Ren; a++){
        printf("El promedio es: %.2f \n", PromedioR[a]);
    }
}
void PromedioColumnas(int MatrizC[Ren][Col], float PromedioC[Col]){
    float contador;
    for(int i=0; i<Col;i++){
        contador=0;
        for(int j=0; j<Ren; j++){
            contador=contador+MatrizC[j][i];
        }
        PromedioC[i]=contador/Ren;
    }
    printf("promedio de columnas \n");
    for (int a=0; a<Col; a++){
        printf("El promedio es: %.2f \n", PromedioC[a]);
    }
}