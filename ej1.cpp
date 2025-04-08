#include <stdio.h>

void intercambiar(float *a, float *b){
 float aOriginal = *a;
 float bOriginal = *b;
	
	*a = *b;
	*b = aOriginal;
	
	printf("Los valores de a y b son %f y %f y los valores finales son %f y %f \n", aOriginal, bOriginal, *a, *b);
}

int main(){
	float a, b;
	printf("Ingrese valor de a \n");
	scanf("%f", & a);
	printf("Ingrese valor de b \n");
	scanf("%f", & b);
	
	intercambiar(&a, &b);
}

