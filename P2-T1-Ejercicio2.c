//
// Created by angelnota on 15/03/22.
//

/*
 * Números de fibonacci.  Los números de Fibonacci, comúnmente denotados como F(n) son parte de una
 * secuencia conocida como Secuencia de Fibonacci, en la cual cada número es la suma de los dos números anteriores de la secuencia, empezando por 0 y 1.
 * Tal que:
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n-1) + F(n – 2) para n > 1
 * Realice un programa en C lea un número n y calcule en una función recursiva el fibonacci de n.
 * Ejemplo:
 * Entrada:  n = 1
 * Salida:  1
 * Ejemplo 2:
 * Entrada:  n = 2
 * Salida:  2
 * Ejemplo 3:
 * Entrada n = 6
 * Salida:  8
 *
 */

#include <stdio.h>

int fibonacci(int n);
int main(){
    int n;

    printf("Hasta que numero quieres: \n\t");
    scanf("%d", &n);

    for (int i = 0; i <= n; ++i) {
        printf("El fibonacci de %d es %d \n ",n, fibonacci(i));
    }
}

int fibonacci(int n){
    if(n == 0 || n == 1){
       return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}