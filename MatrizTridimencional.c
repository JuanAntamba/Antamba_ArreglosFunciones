#include <stdio.h>

int main() {
    int num_matrices, filas, columnas;

    // Se pide al usuario las dimensiones de las matrices y el número de las mismas, además de declarar las variables
    printf("Ingrese el numero de matrices: ");
    scanf("%d", &num_matrices);
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int arreglo_tridimensional[num_matrices][filas][columnas];

    // En este bucle se inicializa la última matriz en unos
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            arreglo_tridimensional[num_matrices - 1][i][j] = 1;
        }
    }

    // En este bucle se inicializan las demás matrices en ceros
    for (int k = 0; k < num_matrices - 1; k++) {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                arreglo_tridimensional[k][i][j] = 0;
            }
        }
    }

    // En este apartado con el uso de bucles for se imprime las matrices correspondientes al arreglo tridimensional
    for (int k = 0; k < num_matrices; k++) {
        printf("Matriz %d:\n", k + 1);
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                printf("%d ", arreglo_tridimensional[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}