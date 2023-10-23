#pragma once
#include "include.h"

int Partition(int A[], long int start, long int end){
    
        long int pivot = A[start];

        int k = 0, tmp;
        for (int i = start + 1; i <= end; i++) {
            if (A[i] <= pivot)
                k++;
        }

        int pivotIndex = start + k;
        tmp = A[pivotIndex];
        A[pivotIndex] = A[start];
        A[start] = tmp;


        int i = start, j = end;

        while (i < pivotIndex && j > pivotIndex) {

            while (A[i] <= pivot) {
                i++;
            }

            while (A[j] > pivot) {
                j--;
            }

            if (i < pivotIndex && j > pivotIndex) {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
                i++;
                j--;
            }
        }
        return pivotIndex;
    
    

    
}
