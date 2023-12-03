#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    srand(time(NULL));

    int matrizA[filas][columnas];
    int matrizB[filas][columnas];
    int matrizC[filas][columnas];

    printf("Matriz A:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizA[i][j] = rand() % 100 + 1;
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz B:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizB[i][j] = rand() % 100 + 1; 
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Resultado de la suma:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}