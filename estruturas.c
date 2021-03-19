#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "estruturas.h"

// Menor_Valor
int Menor_Valor(int *vetor, int tamanho)
{
    int menor = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    return menor;
}

// Posicao_Menor
int Posicao_Menor_Valor(int *vetor, int inicio, int tamanho)
{    
    int menor = vetor[inicio];
    for (int i = inicio + 1; i < tamanho; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            inicio = i;
        }
    }
    return inicio;
}

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
int *Bubble_Sort(int *dados, int tamanho)
{
    int aux = 0;
    for (int i = 1; i <= tamanho; i++)
    {
        for (int j = 0; j < tamanho - 1; j++)
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

// Selection_Sort
int *Selection_Sort(int *vetor, int tamanho)
{
    int aux = 0;
    int indice;

    for (int i = 0; i < tamanho - 1; i++)
    {
        indice = Posicao_Menor_Valor(vetor, i, tamanho);
        aux = vetor[i];
        vetor[i] = vetor[indice];
        vetor[indice] = aux;
    }
    return vetor;
}