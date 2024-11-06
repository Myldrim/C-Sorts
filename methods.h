#ifndef METHODS_H
#define METHODS_H
#include "methods.c"
//cria os vetores com numeros aleatorios
void criaVet(int *arr, int size);
//Bubble Sort
void bubble_sort(int *arr, int size);
//Merge Sort (divide e conquista)
void merge(int *arr, int left, int mid, int right);
void mergesort(int *arr, int left, int right);
//Selection Sort
void selection_sort(int *vet, int size);
//Heap Sort
void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
//Insertion Sort
void insertion_sort(int *vet, int n);
//Quick Sort
void trocar_elementos(int *primeiro_elemento, int *segundo_elemento);
int particionar(int arr[], int inicio, int fim);
void quick_sort(int arr[], int inicio, int fim);
void ordenarUsandoQuickSort(int arr[], int n);
#endif