#include <stdio.h>
//Se crea la funcio para que se cree la matriz en ceros
void inicializarMatrizCeros(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }
}
