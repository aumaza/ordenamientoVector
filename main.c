#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVector(int [], int );

int main()
{
    int vector[5] = {5, 2, -3, 9, 4};
    int aux;
    int cantI=0;
    int cantJ=0;
    int i;
    int j;

    printf("\nSe ordenaran los valores ya cargados");

    for(i=0; i<TAM-1; i++)//negra
    {
        cantI++;
        for(j=i+1; j<TAM; j++)//Roja
        {
           cantJ++;
           if(vector[i] < vector[j])
           {
               aux = vector[i];
               vector[i] = vector[j];
               vector[j] = aux;
           }
        }
    }

    mostrarVector(vector, TAM);
    printf("\n==========================\n");
    printf("\nCONTADORES I= %d", cantI);
    printf("\n==========================\n");
    printf("\nCONTADORES J= %d", cantJ);
    printf("\n==========================\n");

    getchar();
    return 0;
}

void mostrarVector(int vector[], int tamanio)
{
    int i;

    printf("\nEn orden Descendente");
    printf("\n==========================\n");

    for(i=0; i<tamanio; i++)
    {

         printf("%d\n", vector[i]);
    }

printf("\nEn orden Ascendente");
printf("\n==========================\n");

   for(i=tamanio; i>=0; i--)
    {

         printf("%d\n", vector[i]);
    }



}
