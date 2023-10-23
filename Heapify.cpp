#pragma once
#include "include.h"

void Heapify(int A[], int N, int i){
    int largest = i;
    int tmp;
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    if (l < N && A[l] > A[largest])
        largest = l;

    if (r < N && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        Heapify(A, N, largest);
    }
}