//
// Created by angelnota on 27/04/22.
//
/*
 * Utilizando las funciones de Colas realizadas en clase,
 * indique cual es la salida del siguiente código tomando en
 * cuenta que cuando la función algoritmo_examen se
 * llama, la primer cola contiene los valores [2, 3, 9] y
 * la segunda [1, 4, 8, 9].
 *
 */

#include <stdio.h>
#define MAX 7

typedef struct cola{
    int datos[MAX + 1];
    int inicio, fin;
}Cola;


void inicializaCola(Cola *c);
int estaVacia(Cola cola);
int estaLlena(Cola cola);
int inserta(Cola *c, int valor);
int elimina(Cola *c, int *v);
void imprime(Cola c);
void algoritmo_examen(Cola *c1, Cola *c2);

int main(){
    Cola cola;
    int r, valor;
    inicializaCola(&cola);
    for(int i = 0; i < MAX; i++){
        printf("dame un numero: ");
        scanf("%d",&valor);
        r = inserta(&cola,valor);
    }
    algoritmo_examen(&cola, &cola);
}
void inicializaCola(Cola *c){
    c->inicio = 0;
    c->fin = 0;
}
int estaVacia(Cola cola){
    if(cola.inicio == cola.fin){
        return 1;
    }
    return 0;
}
int estaLlena(Cola cola){
    if(cola.fin < cola.inicio || (cola.inicio == 0 && cola.fin == MAX)){
        return 1;
    }

    return 0;
}
int inserta(Cola *c, int valor){
    if(estaLlena(*c) == 0){
        c->datos[c->fin] = valor;
        c->fin++;
        if(c->fin == MAX+1){
            c->fin=0;
        }
        //c->fin = (c->fin + 1) % (MAX + 1);
        return 1;
    }

    return 0;
}
int elimina(Cola *c, int *v){
    if(!estaVacia(*c)){
        *v = c->datos[c->inicio];
        c->inicio = (c->inicio + 1) % (MAX + 1);
        return 1;
    }
    return 0;
}
void imprime(Cola c){
    printf("%d",c.datos[c.inicio]);
}
void algoritmo_examen(Cola *c1, Cola *c2){
    int valor1, valor2;
    int contador=0;

    while (contador < 3){
        if(elimina(c1, &valor1) == 1){
            if(valor1 % 2 == 0){
                inserta(c2, valor1);
            }
            else{
                inserta(c1, valor1);
            }
        }

        if(elimina(c2, &valor2) == 1){
            if(valor2 % 2 != 0){
                inserta(c1, valor2);
            }
            else{
                inserta(c2, valor2);
            }
        }
        contador++;

        printf("\n");
        imprime(*c1);
        printf("\n");
        imprime(*c2);
    }
}