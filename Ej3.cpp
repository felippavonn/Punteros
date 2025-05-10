/*3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.*/
#include <stdio.h>
void mayorYmenor(float *mayor, float *menor, int tamanio, float *numeros) 
{
    *menor = *numeros; 
    *mayor = *numeros; 
    for(int i = 0; i < tamanio; i++) 
	{
        if(*(numeros + i) > *mayor) 
		{  
            *mayor = *(numeros + i); 
        }
        if(*(numeros + i) < *menor) 
		{ 
            *menor = *(numeros + i); 
        }
    }
}
int main() 
{
    int tamanio;
    float mayor = 0, menor = 0;

    printf("Ingrese la cantidad de numeros que ingresara: ");
    scanf("%d", &tamanio);

    float numeros[tamanio]; 

    for(int i = 0; i < tamanio; i++) 
	{
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    mayorYmenor(&mayor, &menor, tamanio, numeros); 

    printf("El numero mayor es: %.2f \nEl numero menor es: %.2f \n", mayor, menor); 

    return 0;
}
