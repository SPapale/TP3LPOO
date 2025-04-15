#include <stdio.h>


int encontrarMayor(int *arr, int tam) {
    int mayor = *arr;
    for (int i = 1; i < tam; i++) {
        if (*(arr + i) > mayor) {
            mayor = *(arr + i);
        }
    }
    return mayor;
}


int encontrarMenor(int *arr, int tam) {
    int menor = *arr;
    for (int i = 1; i < tam; i++) {
        if (*(arr + i) < menor) {
            menor = *(arr + i);
        }
    }
    return menor;
}

int main() {
    int tamanio;
    int arreglo[100]; 

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &tamanio);

    if (tamanio > 100 || tamanio <= 0) {
        printf("Tamanio invalido.\n");
        return 1;
    }

    for (int i = 0; i < tamanio; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    int mayor = encontrarMayor(arreglo, tamanio);
    int menor = encontrarMenor(arreglo, tamanio);

    printf("\nEl mayor elemento es: %d\n", mayor);
    printf("El menor elemento es: %d\n", menor);

    return 0;
}
