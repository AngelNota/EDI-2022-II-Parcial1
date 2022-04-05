//
// Created by angelnota on 03/04/22.
//
/*
 * Utilizando estructuras modele la información de fechas.  La estructura debe permitir almacenar la información de:
 * día
 * mes (utilice el nombre del mes, no el número)
 * año
 * Cree funciones para:
 * Capturar una fecha solicitandola al usuario
 * Imprimir la fecha en el formato:  DD/MMMM/AAAA. Utilizando los valores:
 * dia = 1
 * mes = abril
 * annio = 2019
 * La función deberá imprimir 01/Abril/2019.  Note que el mes está escrito con mayúscula la primer letra.
 *
 */
#include <stdio.h>

typedef struct
{
    int Dia;
    char Mes[50];
    int Annio;
}Fecha;

void solicitar(Fecha *fecha);
void imprimir(Fecha fecha);
int main(){
    Fecha fecha;
    solicitar(&fecha);
    imprimir(fecha);
    return 0;
}
void solicitar(Fecha *fecha){
    printf("Dame el día: \t");
    scanf("%d",&fecha->Dia);
    printf("Dame el Mes: \t");
    scanf("%s",&fecha->Mes);
    printf("Dame el año: \t");
    scanf("%d",&fecha->Annio);
}
void imprimir(Fecha fecha){
    for (int i = 0; i < sizeof fecha.Mes; ++i)
    {
        if(fecha.Mes[0] >= 97 && fecha.Mes[0] <= 122)
            fecha.Mes[0] -= 32;
        else if (fecha.Mes[i] >= 65 && fecha.Mes[i] <= 90)
            fecha.Mes[i] += 32;
    }

    printf("%d/%s/%d",fecha.Dia, fecha.Mes, fecha.Annio);
}