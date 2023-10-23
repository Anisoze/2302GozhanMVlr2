#pragma once
#include "include.h"

void BubbleSort(int A[], int N) {
    bool swapped;
    int tmp;
    do {
        swapped = false;
        for (int i = 0; i < N - 1; i++) {
            if (A[i] > A[i + 1]) {
                swapped = true;
                while (i<N-1) {
                    if (A[i] > A[i + 1]) {
                        tmp = A[i];
                        A[i] = A[i + 1];
                        A[i + 1] = tmp;
                    }
                    i++;
                }
            }
        }
    } while (swapped);

}