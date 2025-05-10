/*5. Concatenar dos cadenas usando punteros y funciones.*/
#include <stdio.h>
#include <string.h>
void concatenar ( char *pUno, char *pDos, char *palabraUno, char *palabraDos, char *concatenado)
{
    pUno = palabraUno;
    pDos = palabraDos;
    int tamanioUno = strlen(palabraUno);
    int tamanioDos = strlen(palabraDos);
    int tamanioSuma = tamanioUno + tamanioDos;
    
    for(int i = 0; i < (tamanioUno); i++) 
	{
        if(i < tamanioUno) 
		{
            *(concatenado + i) = *(pUno + i); 
        } 
    *(concatenado + tamanioUno) = '\0'; 
    }
    
    for(int i = 0; i< tamanioDos; i++) 
	{
        if(i < tamanioDos) 
		{
            *(concatenado + tamanioUno + i) += *(pDos + i); 
        }
    *(concatenado + tamanioSuma) = '\0';
    }
}
int main()
{
    char palabraUno[99], palabraDos[99], concatenado[199], *pUno, *pDos;
    printf("Ingrese la primer cadena: ");
    fgets(palabraUno, sizeof(palabraUno), stdin);
    palabraUno[strcspn(palabraUno, "\n")] = 0;
    
    printf("Ingrese la segunda cadena: ");  
    fgets(palabraDos, sizeof(palabraDos), stdin);
    palabraDos[strcspn(palabraDos, "\n")] = 0;

    concatenar(pUno, pDos, palabraUno, palabraDos, concatenado);
    
    printf("La cadena concatenada es: %s", concatenado);

}
