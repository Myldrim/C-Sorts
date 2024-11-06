#include "methods.h"
//cria os vetores com numeros aleatorios
void criaVet(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100000;
    }
}
//Bubble Sort
void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}
//Merge Sort (divide e conquista)
void merge(int *arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int *arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
//Selection Sort
void selection_sort(int *vet, int size) {
    int contA, contB, aux;

    for (contA = 0; contA < size; contA++) { 
        for (contB = contA + 1; contB < size; contB++) {
            if (vet[contA] > vet[contB]) {
                aux = vet[contB];
                vet[contB] = vet[contA];
                vet[contA] = aux;
            }
        }
    }
}
//Heap Sort
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
//Insertion Sort
void insertion_sort(int *vet, int n) {
    int contA, i, aux;

    for (contA = 1; contA < n; contA++) { 
        aux = vet[contA];
        i = contA - 1;
        
        while (i >= 0 && vet[i] > aux) {
            vet[i + 1] = vet[i]; 
            i = i - 1;
        }
        vet[i + 1] = aux; 
    }
}
