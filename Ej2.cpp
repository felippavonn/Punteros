/*2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.*/
#include <stdio.h>
void sumaPromedio(float *numeros, int tamanio, float *suma, float *prom) {
    for (int i = 0; i < tamanio; i++) {
        *suma += *(numeros + i); // *(numeros + i) es lo mismo que numeros[i] pq le suma el tamaño que ocupa un float al puntero de numeros entonces va de celda en celda del vector
    }
    *prom = *suma / tamanio; 
}

int main() {
    int tamanio;
    float suma = 0, prom = 0; 

    printf("Ingrese la cantidad de numeros que ingresara: ");
    scanf("%d", &tamanio);

    float numeros[tamanio]; 

    for(int i = 0; i < tamanio; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    sumaPromedio(numeros, tamanio, &suma, &prom); 
    printf("La suma de los numeros es: %.2f \nEl promedio de los numeros es: %.2f \n", suma, prom); 

    return 0;
}
