#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        *(destino + i) = *(origen + i); 
    }
}


void mostrarArreglo(int *arr, int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int tamanio;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &tamanio);

    if (tamanio > 100 || tamanio <= 0) {
        printf("Tamanio invalido.\n");
        return 1;
    }

    int arreglo1[100];
    int arreglo2[100];


    for (int i = 0; i < tamanio; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo1[i]);
    }


    copiarArreglo(arreglo1, arreglo2, tamanio);


    printf("\nContenido del segundo arreglo: ");
    mostrarArreglo(arreglo2, tamanio);

    return 0;
}
