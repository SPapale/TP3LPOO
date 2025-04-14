#include <stdio.h>

int contar(int *arreglo, int tamanio, int elemento){
	int contador = 0;
	for(int i = 0; i<tamanio; i++){
		if(*(arreglo + i) == elemento){
			contador++;
	}
	}
	return contador;
}

int main(){ 
		int tamanio; 
		printf("Ingrese el tamanio del arreglo: ");
		scanf("%d", &tamanio);
			
		int arreglo[tamanio]; 
		for(int i=0; i<tamanio; i++){
		printf("\nIngrese los elementos del arreglo \n");
		printf("Elemento %d ", i+1);
		scanf("%d", &arreglo[i]);
}
		
		int elemento;
		printf("\nIngrese el elemento que queres contar \n");
		scanf("%d", & elemento);
		
		int llamarFuncion = contar(arreglo, tamanio, elemento);
		
		printf("El elemento %d aparece %d veces en el arreglo \n", elemento, llamarFuncion);	


}