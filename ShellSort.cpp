#pragma once
#include "include.h"

void ShellSort1(int A[], int N) {
    for (int h = N / 2; h > 0; h /= 2)
    {
        for (int i = h; i < N; i ++)
        {       
            int tmp = A[i];
            int j;
            for (j = i; j >= h && A[j - h] > tmp; j -= h) {
                A[j] = A[j - h];
            }
            A[j] = tmp;
        }
    }

}

