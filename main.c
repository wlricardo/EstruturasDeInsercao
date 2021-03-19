#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "estruturas.h"

int main(int argc, char const *argv[])
{
    system("cls");

    int *inteiros;
    int tamanho;

    printf("\n Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);
    fflush(stdin);

    // Gerando vetor de inteiros
    printf("\n> Gerando vetor de inteiros:\n");    
    inteiros = Gerar_Dados(tamanho);
    Mostrar_Dados(inteiros, tamanho);

    // Buble Sort
    printf("\n\n Ordenando o vetor pelo metodo\n Bubble Sort:\n");
    inteiros = Bubble_Sort(inteiros, tamanho);
    Mostrar_Dados(inteiros, tamanho);

    printf("=================================\n\n");

    // Gerando vetor de inteiros
    printf("\n> Gerando vetor de inteiros:\n");
    inteiros = Gerar_Dados(tamanho);
    Mostrar_Dados(inteiros, tamanho);

    // Selection Sort
    printf("\n\n Ordenando o vetor pelo metodo\n Selection Sort:\n");
    inteiros = Selection_Sort(inteiros, tamanho);
    Mostrar_Dados(inteiros, tamanho);

    printf("=================================\n\n");

    // Gerando vetor de inteiros
    printf("\n> Gerando vetor de inteiros:\n");
    inteiros = Gerar_Dados(tamanho);
    Mostrar_Dados(inteiros, tamanho);

    // Selection Sort
    printf("\n\n Ordenando o vetor pelo metodo\n Insertion Sort:\n");
    inteiros = Insertion_Sort(inteiros, tamanho);
    Mostrar_Dados(inteiros, tamanho);

    printf("\n\n\n");
    return 0;
}