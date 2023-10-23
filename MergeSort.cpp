#pragma once
#include "include.h"

void MergeSort(int A[], int const start, int const end) {
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;
    MergeSort(A, start, mid);
    MergeSort(A, mid + 1, end);
    Merge(A, start, mid, end, 1);


}







