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

// Se crea una funcion para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int num_matrices, filas, columnas;
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &num_matrices);
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int arreglo_tridimensional[num_matrices][filas][columnas];

    inicializarUltimaMatrizEnUnos(num_matrices, filas, columnas, arreglo_tridimensional);
// Se inicializa la última matriz en unos
  
    for (int k = 0; k < num_matrices - 1; k++) {
        inicializarMatrizCeros(filas, columnas, arreglo_tridimensional[k]);
    }
//Se inicializan todas las matrices que sena de ceros
  
    for (int k = 0; k < num_matrices; k++) {
        printf("Matriz %d:\n", k + 1);
        imprimirMatriz(filas, columnas, arreglo_tridimensional[k]);
    }
 // En esta pate se imprimen las matrices
    return 0;
}




