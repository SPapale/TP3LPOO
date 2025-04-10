#include <stdio.h>
#include <string.h>

void concatenar(char *p1, char *p2, char *palabra1, char *palabra2, char *concatena){
	
	p1 = palabra1;
	p2 = palabra2;
	
	int tamanio1 = strlen(palabra1);
	int tamanio2 = strlen(palabra2); 
	int tamanioTot = tamanio1 + tamanio2;
	
	for(int i = 0; i<tamanio1; i++){
		if(i < tamanio1){
			*(concatena + i) = *(p1 + i);
		}
	*(concatena + tamanio1) = '\0';
	}
	
	for(int i = 0; i<tamanio2; i++){
		if(i < tamanio2){
			*(concatena + tamanio1 + i) = *(p2 + i);
		}
	*(concatena + tamanioTot) = '\0';
	}
	
	
}

int main(){
	
	char palabra1[100], palabra2[100], *p1, *p2, concatena[200];
	
	printf("Ingrese la palabra 1: ");
	fgets(palabra1, sizeof(palabra1), stdin);
	palabra1[strcspn(palabra1, "\n")] = 0;
	
	
	printf("\nIngrese la palabra 2: ");
	fgets(palabra2, sizeof(palabra2), stdin);
	palabra2[strcspn(palabra2, "\n")] = 0;

	concatenar(p1, p2, palabra1, palabra2, concatena);
	
	printf("La palabra concatenada es: %s ", concatena);	
	
	
}