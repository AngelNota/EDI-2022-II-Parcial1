//
// Created by angelnota on 07/03/22.
//

#include <stdio.h>

#define ren 3
#define col 4
void Leer(int Matriz[ren][col]);
void Suma(int Matriz[ren][col], int Vecinos[ren][col]);
void Imprimir(int Vecinos[ren][col]);
int main(){
    int Matriz[ren][col];
    int Vecinos[ren][col];

    Leer(Matriz);
    for (int i = 0; i < ren; ++i) {
        for (int j = 0; j < col; ++j) {
            printf(" %d",Matriz[i][j]);
        }
        printf("\n");
    }
    Suma(Matriz,  Vecinos);

    Imprimir(Vecinos);
}
void Leer(int Matriz[ren][col]){
    for (int i = 0; i < ren; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("Dame un valor ");
            scanf("%d",&Matriz[i][j]);
        }
    }
}
void Suma(int Matriz[ren][col], int Vecinos[ren][col]){
    for (int i = 0; i < ren; ++i) {
        for (int j = 0; j < col; ++j) {
            if(i==0){
                if(j==0){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i+1][j]+Matriz[i][j+1];
                }
                else if(j==3){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i+1][j]+Matriz[i][j-1];
                }
                else if( j == 1 || j == 2){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i+1][j]+Matriz[i][j-1]+Matriz[i][j+1];
                }

            }
            else if(i==2){
                if(j==0){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j+1];
                }
                else if(j==3){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j-1];
                }
                else if( j == 1 || j == 2){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j-1]+Matriz[i][j+1];
                }

            }
            else {
                if(j==0){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j+1]+Matriz[i+1][j];
                }
                else if(j==3){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j-1]+Matriz[i+1][j];
                }
                else if( j == 1 || j == 2){
                    Vecinos[i][j]=Matriz[i][j]+Matriz[i-1][j]+Matriz[i][j-1]+Matriz[i][j+1]+Matriz[i+1][j];
                }

            }

        }
    }
}
void Imprimir(int Vecinos[ren][col]){
    printf("La matriz resultante es: \n");
    for (int i = 0; i < ren; ++i) {
        for (int j = 0; j < col; ++j) {
            printf(" %d",Vecinos[i][j]);
        }
        printf("\n");
    }
}