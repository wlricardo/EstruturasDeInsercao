
/* 
 * Funçoes auxiliares
 * As seguintes funções são usadas para 
 * cálculos intermediários que auxiliam
 * no desenvolvimento das estruras de dados
 */
 
// Menor_Valor
// Retorna o menor valor encontrado no vetor
int Menor_Valor(int *vetor, int tamanho);

// Posicao_Menor
// Retorna o índice do menor valor no vetor
int Posicao_Menor_Valor(int *vertor, int inicio, int tamanho);

/* 
 * Funçoes principais
 * As seguintes funções criam e maninulam
 * as estruturas de dados
 */

// Gerar_Dados
// Função para gerar uma matriz de valores inteiros
int *Gerar_Dados(int tamanho);

// Mostrar_Dados
// Função para imprimir os dados gerados
void Mostrar_Dados(int *dados, int tamanho); 

// Bubble_Sort
// Função para ordenar os dados de um vetor de inteiros usando
// o método Bubble Sort
int *Bubble_Sort(int *vetor, int tamanho);

// Selection_Sort
// Função para ordenar os dados de um vetor de inteiros usando
// o método Selection Sort
int *Selection_Sort(int *vetor, int tamanho);

