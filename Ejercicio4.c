//
// Created by angelnota on 07/03/22.
//

#include <stdio.h>

void funcion(int *a, int *b,int *c);
int main(){
    int a, b, c;

    printf("Dme el valor de a: ");
    scanf("%d",&a);
    printf("Dme el valor de b: ");
    scanf("%d",&b);
    printf("Dme el valor de c: ");
    scanf("%d",&c);

    funcion(&a, &b, &c);

    printf("Los valores son: a = %d \n b = %d \n c = %d ",a,b,c);
}
void funcion(int *a, int *b,int *c){
    if(*a>*b){
        *b=*b * 2;
    }
    if (*a<*b){
        *c=*c - *a;
    }
    if(*c<0){
        *c = *c * (-1);
    }
}