/*4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.*/
#include <stdio.h>
void copyArray(float *numeros, int tamanio) 
{
  float newArray[tamanio];
  for(int i = 0; i < tamanio; i++) 
  {
    *(newArray + i) = *(numeros + i);
  }
}
int main() 
{
    int tamanio;
    printf("Ingrese la cantidad de numeros que ingresara: ");
    scanf("%d", &tamanio);
    float numeros[tamanio];

    for(int i = 0; i < tamanio; i++) 
	{
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    copyArray(numeros, tamanio); 
    printf("El nuevo arreglo es: ");
    for(int i = 0; i < tamanio; i++) 
	{
        printf("\n                     %.2f", *(numeros + i)); 
    }
    return 0;
}
