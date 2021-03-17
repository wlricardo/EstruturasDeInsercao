#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "estruturas.h"

int main(int argc, char const *argv[])
{    
    int *inteiros;
    int tamanho;

    printf("\n Informe o tamanho do vetor: ");
    scanf("%d", &tamanho); fflush(stdin);

    inteiros = Gerar_Dados(tamanho);
    Mostrar_Dados(inteiros, tamanho);

    printf("\n Ordenando o vetor pelo metodo\n Bubble Sort:\n\n");
    inteiros = Bubble_Sort(inteiros, tamanho);
    Mostrar_Dados(inteiros, tamanho);
    
    printf("\n\n\n");
    return 0;
}