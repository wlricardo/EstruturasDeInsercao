#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "estruturas.h"

// Gerar_Dados
int *Gerar_Dados(int tamanho)
{
    int *vetor;

    vetor = (int *)calloc(tamanho, sizeof(int));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = 1 + (rand() % 50);
    }

    return vetor;
}

// Mostrar dados
void Mostrar_Dados(int *dados, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf(" %2d", dados[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

// Bubble_Sort
/* Laço que percorre até a penúltima posição do vetor */
int *Bubble_Sort(int *dados, int tamanho)
{
    int aux = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho - 2; j++)
        {
            if (dados[j] > dados[j + 1])
            {
                aux = dados[j];
                dados[j] = dados[j + 1];
                dados[j + 1] = aux;
            }
        }
    }
    return dados;
}