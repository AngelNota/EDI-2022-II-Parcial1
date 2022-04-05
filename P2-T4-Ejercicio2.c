//
// Created by angelnota on 04/04/22.
//
/*
 * Utilizando estructuras modele la información de puntos en un plano cartesiano.  Cada punto deberá contener
 * x y y.  Realice las siguientes funciones:
 * Capturar un punto solicitandolo al usuario.
 * Imprimir un punto con el siguiente formato (x, y)
 * Calcular la distancia entre dos puntos, la función recibirá dos puntos como parámetro y regresará la distancia entre ellos.
 *
 */
#include "stdio.h"
#include "math.h"

typedef struct {
    int x1, y1;
    int x2, y2;
    double distancia;
}Plano;
void puntos(Plano *Cartesiano);
void distancia(Plano Cartesiano);
int main(){
    Plano Cartesiano;
    puntos(&Cartesiano);


    distancia(Cartesiano);

    return 0;
}
void puntos(Plano *Cartesiano){
    printf("Dame una coordenada x1: \t");
    scanf("%d",&Cartesiano->x1);
    printf("Dame una coordenada y1: \t");
    scanf("%d",&Cartesiano->y1);
    printf("Dame una coordenada x2: \t");
    scanf("%d",&Cartesiano->x2);
    printf("Dame una coordenada y2: \t");
    scanf("%d",&Cartesiano->y2);

}
void distancia(Plano Cartesiano){
    float distanciaa;
    distanciaa = ((Cartesiano.x2 - Cartesiano.x1)*(Cartesiano.x2 - Cartesiano.x1)) + ((Cartesiano.y2 - Cartesiano.y1)*(Cartesiano.y2 - Cartesiano.y1));
    distanciaa = sqrt( distanciaa);
    printf("La distancia entre los puntos (%d, %d) y (%d, %d) es de: %f",Cartesiano.x1,Cartesiano.y1,Cartesiano.x2,Cartesiano.y2,distanciaa);
}