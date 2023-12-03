#include <stdio.h>
//Se crea la funcio para que se cree la matriz en ceros
void inicializarMatrizCeros(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }
}

// Se crea la funcion para que se cree la matriz de unos
void inicializarUltimaMatrizEnUnos(int num_matrices, int filas, int columnas, int matriz[num_matrices][filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[num_matrices - 1][i][j] = 1;
        }
    }
}


