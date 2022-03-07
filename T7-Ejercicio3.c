//
// Created by angelnota on 02/03/22.
//

/*
 * Realice un programa en C que capture la clave, precio y el stock de los productos de una tienda.
 * El programa deberá imprimir la clave del producto con mayor precio, la clave del producto con menos stock,
 * el total de venta en caso de que se vendan todos los productos de la tienda.
 * Ejemplo:
 * Suponga que hay 4 productos en la tienda
 * Clave      Precio      Stock
 * 43         10.50         4
 * 33         9.99          1
 * 12         7.30          6
 * 99         12.90         3
 * El programa imprimirá:
 * Producto con mayor precio: 99
 * Producto con menos stock:  33
 * Total de venta esperada:  134.49
 *
 */

#include <stdio.h>
#define CantidadProductos 4
void LlenarClave(int Clave[CantidadProductos]);
void LlenarPrecio(float Precio[CantidadProductos], int Clave[CantidadProductos]);
void LlenarStock(int Stock[CantidadProductos], int Clave[CantidadProductos]);
void Imprimir(int Clave[CantidadProductos], float Precio[CantidadProductos], int Stock[CantidadProductos]);

int main(){
    int Clave[CantidadProductos], Stock[CantidadProductos];
    float Precio[CantidadProductos];

    LlenarClave( Clave);
    LlenarPrecio( Precio, Clave);
    LlenarStock( Stock, Clave);
    Imprimir(Clave, Precio, Stock);
    return 0;
}
void LlenarClave(int Clave[CantidadProductos]){
    int i;
    for(i=0;i<CantidadProductos;i++){
        printf("Dame la clave del producto %d: ",i+1);
        scanf("%d",&Clave[i]);
    }
}
void LlenarPrecio(float Precio[CantidadProductos], int Clave[CantidadProductos]){
    int i;
    for(i=0;i<CantidadProductos;i++) {
        printf("Dame el precio del producto con clave %d: ",Clave[i]);
        scanf("%f",&Precio[i]);
    }
}
void LlenarStock(int Stock[CantidadProductos], int Clave[CantidadProductos]){
  int i;
     for(i=0;i<CantidadProductos;i++) {
        printf("Dame el Stock del producto con clave %d: ",Clave[i]);
        scanf("%d", &Stock[i]);
    }
}
void Imprimir(int Clave[CantidadProductos], float Precio[CantidadProductos], int Stock[CantidadProductos]){
    int i, MayorPrecio=0,MayorPrecio2=0, MenorStock=1000000,MenorStock2=0;
    float Total=0;
    for (i = 0; i < CantidadProductos ; i++) {
        if(Precio[i]>MayorPrecio){
            MayorPrecio=Precio[i];
            MayorPrecio2=Clave[i];
        }
        if(MenorStock>Stock[i]){
            MenorStock=Stock[i];
            MenorStock2=Clave[i];
        }
        Total=(Precio[i]*Stock[i])+Total;
    }

    printf("Producto con mayor precio: %d \n"
           "Producto con menos stock: %d \n"
           "Total de venta esperada: %.2f \n", MayorPrecio2, MenorStock2, Total);
}