#include <stdio.h>


void suma(int *arr, int n, int *resultado_suma) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(arr + i);  
    }
    *resultado_suma = total;  
}

void promedio(int *arr, int n, float *resultado_promedio) {
    int total = 0;
    suma(arr, n, &total);  
    *resultado_promedio = (float)total / n;  
}

int main() {
    int n;

   
    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    int arr[n];  
    
    
    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int suma_total = 0;
    float promedio_total = 0.0;
    
   
    suma(arr, n, &suma_total);
    promedio(arr, n, &promedio_total);
    
    printf("Suma de los elementos: %d\n", suma_total);
    printf("Promedio de los elementos: %.2f\n", promedio_total);
    
    return 0;
}
