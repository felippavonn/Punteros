/*1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales.*/

#include<stdio.h>

void function(int *a, int *b){
	int valorA = *a;
	int valorB = *b;
	
	*a = *b;
	*b = valorA;
	
	printf(" A = %d \n B = %d \n Los nuevos valores son: \n A = %d\n B = %d", valorA, valorB, *a, *b);
	
	
}

int main(){
	int a, b;
	
	printf("Ingrese el valor de A: ");
	scanf("%d", & a);
	printf("Ingrese el valor de B: ");
	scanf("%d", & b);
	
	function(&a, &b);
}
