#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Creamos la funcion para llenar la matriz aleatoria
void llenarMatrizAleatoria(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100 + 1; 
        }
    }
}

// Creamos otra funcion que sera usa para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]); 
        }
        printf("\n"); 
    }
    printf("\n"); 
}
