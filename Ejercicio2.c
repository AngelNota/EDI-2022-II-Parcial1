//
// Created by angelnota on 07/03/22.
//

#include <stdio.h>
#define Limite 100
void Intercambio(char Cadena[Limite]);
int main(){
    char Cadena[Limite];

    printf("Escribe una frase: ");
    scanf("%[A-ñ-z ]", Cadena);
    Intercambio(Cadena);
    printf("%s",Cadena);
}
void Intercambio(char Cadena[Limite]){
    char Mayus[5] = {'A','E','I','O','U'};
    char Minus[5] = {'a','e','i','o','u'};

    for(int i=0;i<Limite;i++){
        for (int j = 0; j < 5; ++j) {
            if(Cadena[i] == Mayus[j]){
                Cadena[i] = Minus[j];
            }
            else if(Cadena[i] == Minus[j]){
                Cadena[i] = Mayus[j];
            }
        }

    }
}
