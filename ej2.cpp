#include <stdio.h>

// Función para calcular la suma de los elementos de un arreglo
void suma(int *arr, int n, int *resultado_suma) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(arr + i);  // Acceder al valor usando el puntero
    }
    *resultado_suma = total;  // Guardar la suma en la variable proporcionada
}

// Función para calcular el promedio de los elementos de un arreglo
void promedio(int *arr, int n, float *resultado_promedio) {
    int total = 0;
    suma(arr, n, &total);  // Llamada a la función suma para obtener la suma
    *resultado_promedio = (float)total / n;  // Guardar el promedio en la variable proporcionada
}

int main() {
    int n;

    // Pedir al usuario que ingrese el tamaño del arreglo
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    int arr[n];  // Declarar el arreglo con tamaño 'n'
    
    // Pedir al usuario que ingrese los elementos del arreglo
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int suma_total = 0;
    float promedio_total = 0.0;
    
    // Llamar a las funciones para calcular suma y promedio
    suma(arr, n, &suma_total);
    promedio(arr, n, &promedio_total);
    
    printf("Suma de los elementos: %d\n", suma_total);
    printf("Promedio de los elementos: %.2f\n", promedio_total);
    
    return 0;
}
