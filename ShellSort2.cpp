#pragma once
#include "include.h"

void ShellSort2(int A[], int N) {
    int h, i, j, seq[15], s;
    s = Increment(seq, N);
    while (s >= 0) {
        h = seq[s];
        s--;
        for (i = h; i < N; i++) {
            int temp = A[i];    
            for (j = i - h; (j >= 0) && (A[j] > temp); j -= h){
                A[j + h] = A[j];
            }
            A[j + h] = temp;
        }
    }
}



