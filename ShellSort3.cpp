#pragma once
#include "include.h"

void ShellSort3(int A[], int N) {

    int h, i, j, seq[18], s;
    s = Increment2(seq, N);
    while (s >= 0) {
        h = seq[s];
        s--;
        for (i = h; i < N; i++) {
            int temp = A[i];
            for (j = i - h; (j >= 0) && (A[j] > temp); j -= h) {
                A[j + h] = A[j];
            }
            A[j + h] = temp;
        }
    }
}








/*

    val = (int)log((float)N + 1) / log((float)2);
    increment = pow((float)2, val) - 1;
    while (increment > 0)
    {
        for (i = 0; i < increment; i++)
        {
            for (j = 0; j < N; j += increment)
            {
                tmp = A[j];
                for (k = j - increment; k >= 0 && tmp < A[k]; k -= increment)
                {
                    A[k + increment] = A[k];
                }
                A[k + increment] = tmp;
            }
        }
        val--;
        if (increment != 1)
            increment = pow((float)2, val) - 1;
        else
            increment = 0;
    }
    */