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

//En esta parte se crea la funcion para sumar las matrices y de esta forma crear la tercera matriz
void sumarMatrices(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas], int matrizC[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; // Suma los elementos correspondientes y los almacena en la matriz resultado
        }
    }
}

int main() {
    int filas, columnas;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);
    
    srand(time(NULL)); // Utilizamos el comando para la generacion de numeros aleatorios

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int matrizC[filas][columnas];

    printf("Matriz A:\n");
    llenarMatrizAleatoria(filas, columnas, matrizA); 
    imprimirMatriz(filas, columnas, matrizA); 
// Llenamos la matriz A y la imprimimos
    printf("Matriz B:\n");
    llenarMatrizAleatoria(filas, columnas, matrizB); 
    imprimirMatriz(filas, columnas, matrizB); 
// Llenamos la matriz B y la imprimimos
    printf("Resultado de la suma:\n");
    sumarMatrices(filas, columnas, matrizA, matrizB, matrizC); 
    imprimirMatriz(filas, columnas, matrizC); 
//Aqui se almacena el resultado de la suma y se imprime
    return 0;
}

