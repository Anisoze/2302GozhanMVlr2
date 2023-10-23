#pragma once
#include "include.h"

void Merge(int A[], int const left, int const mid, int const right, int t) {
    int const size1 = mid - left + t;
    int const size2 = right - mid;


    int* A1 = new int[size1], * A2 = new int[size2];


    for (int i = 0; i < size1; i++) {
        A1[i] = A[left + i];
    }
    for (int j = 0; j < size2; j++) {
        A2[j] = A[mid + t + j];
    }

    int index1 = 0, index2 = 0;
    int index = left;


    while (index1 < size1 && index2 < size2) {
        if (A1[index1] <= A2[index2]) {
            A[index] = A1[index1];
            index1++;
        }
        else {
            A[index] = A2[index2];
            index2++;
        }
        index++;
    }


    while (index1 < size1) {
        A[index] = A1[index1];
        index1++;
        index++;
    }


    while (index2 < size2) {
        A[index] = A2[index2];
        index2++;
        index++;
    }
    delete[] A1;
    delete[] A2;
}