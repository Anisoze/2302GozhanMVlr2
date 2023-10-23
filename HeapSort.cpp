#pragma once
#include "include.h"

void HeapSort(int A[], int N){
    for (int i = N / 2 - 1; i >= 0; i--){
        Heapify(A, N, i);
    }
    int tmp;
    for (int i = N - 1; i >= 0; i--){
        tmp = A[0];
        A[0] = A[i];
        A[i] = tmp;
        Heapify(A, i, 0);
    }
}