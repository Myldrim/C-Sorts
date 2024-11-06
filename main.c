#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "methods.h"
#include <string.h>

// Função que executa todos os sorts
void executaSorts(int tamanhos[], int size) {
    for (int i = 0; i < size; i++) {
        int n = tamanhos[i];
        int *arr = (int *)malloc(n * sizeof(int));
        if (arr == NULL) {
            printf("Erro ao alocar memória!\n");
            return;
        }

        // Cria o vetor com valores aleatórios
        criaVet(arr, n);

        // Merge Sort
        //Cria um vetor especifico pra executar o Merge Sort
        int *arr_merge = malloc(n * sizeof(int)); 
        memcpy(arr_merge, arr, n * sizeof(int)); 

        clock_t inicio_merge = clock();
        mergesort(arr_merge, 0, n - 1); 
        clock_t fim_merge = clock();
        double tempo_execucao_merge = (double)(fim_merge - inicio_merge) / CLOCKS_PER_SEC;
        printf("Merge Sort para %d elementos: %.6f segundos\n", n, tempo_execucao_merge);
        free(arr_merge); 

        // Heap Sort
        //Cria um vetor especifico pra executar o Heap Sort
        int *arr_heap = malloc(n * sizeof(int));
        memcpy(arr_heap, arr, n * sizeof(int)); 

        clock_t inicio_heap = clock();
        heapSort(arr_heap, n);
        clock_t fim_heap = clock();
        double tempo_execucao_heap = (double)(fim_heap - inicio_heap) / CLOCKS_PER_SEC;
        printf("Heap Sort para %d elementos: %.6f segundos\n", n, tempo_execucao_heap);
        free(arr_heap); 

        // Bubble Sort
        //Cria um vetor especifico pra executar o Bubble Sort
        int *arr_bubble = malloc(n * sizeof(int));
        memcpy(arr_bubble, arr, n * sizeof(int)); 
        clock_t inicio_bubble = clock();
        bubble_sort(arr_bubble, n);
        clock_t fim_bubble = clock();
        double tempo_execucao_bubble = (double)(fim_bubble - inicio_bubble) / CLOCKS_PER_SEC;
        printf("Bubble Sort para %d elementos: %.6f segundos\n", n, tempo_execucao_bubble);
        free(arr_bubble); 

        // Selection Sort
        //Cria um vetor especifico pra executar o Selection sort
        int *arr_selection = malloc(n * sizeof(int)); 
        memcpy(arr_selection, arr, n * sizeof(int)); 
        clock_t inicio_selection = clock();
        selection_sort(arr_selection, n); 
        clock_t fim_selection = clock();
        double tempo_execucao_selection = (double)(fim_selection - inicio_selection) / CLOCKS_PER_SEC;
        printf("Selection Sort para %d elementos: %.6f segundos\n", n, tempo_execucao_selection);
        free(arr_selection); 

        // Insertion Sort
        //Cria um vetor especifico pra executar o Insertion Sort
        int *arr_insertion = malloc(n * sizeof(int)); 
        memcpy(arr_insertion, arr, n * sizeof(int)); 

        clock_t inicio_insertion = clock();
        insertion_sort(arr_insertion, n); 
        clock_t fim_insertion = clock();
        double tempo_execucao_insertion = (double)(fim_insertion - inicio_insertion) / CLOCKS_PER_SEC;
        printf("Insertion Sort para %d elementos: %.6f segundos\n", n, tempo_execucao_insertion);
        free(arr_insertion); 

        free(arr);  // Libera o vetor principal
        printf("\n");
    }
}

int main() {
    srand(time(NULL));  // Inicializa a geração de números aleatórios
    int tamanhos[] = {100, 1000, 10000, 50000, 100000};
    int size = sizeof(tamanhos) / sizeof(tamanhos[0]);

    executaSorts(tamanhos, size); 
    return 0;
}
