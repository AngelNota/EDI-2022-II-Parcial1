//
// Created by angelnota on 15/03/22.
//

/*
 *  Realice un programa que dada una cadena de caracteres diga si es simétrica (palíndroma).
 *  Realice una función recursiva que reciba la cadena y regrese un 1 si es palíndroma o un 0 si no.
 *  Realice una función que reciba la cadena y mediante ciclos regrese un 1 si la cadena es palíndroma o un 0 si no.
 *
 */
#include "stdio.h"
#include "string.h"

int recursiva(char *Cadena, int Inicio, int Fin);
int ciclos(char *Cadena, int Inicio, int Fin);
int main(){
    char Cadena[20];
    printf("Escribe una palabra: \n");
    scanf("%[A-ñ-z]", &Cadena);

    int Fin = strlen(Cadena);
    int resultado = recursiva(Cadena, 0, Fin - 1);
    if (resultado) {
        printf("Con recursividad la palabra: '%s' es palindroma\n", Cadena);
    } else {
        printf("Con recursividad la palabra: '%s' NO es palindroma\n", Cadena);
    }

    int resultadoC = ciclos(Cadena, 0, Fin);
    if (resultadoC) {
        printf("Con ciclos la palbra '%s' es palindroma\n", Cadena);
    }
     else {
        printf("Con ciclos la palabra '%s' NO es palindroma\n", Cadena);
    }
}
int recursiva(char *Cadena, int Inicio, int Fin){

    if (Inicio >= Fin) return 1;

    if (Cadena[Inicio] == Cadena[Fin]) {
        return recursiva(Cadena, Inicio + 1, Fin - 1);
    } else {
        return 0;
    }

}

int ciclos(char *Cadena, int Inicio, int Fin){
    if (Fin <= 1) return 1;
    Fin = Fin - 1;
    while (Cadena[Inicio] == Cadena[Fin]){
        if (Inicio >= Fin) return 1;
        Inicio++;
        Fin--;
    }
    return 0;

}
