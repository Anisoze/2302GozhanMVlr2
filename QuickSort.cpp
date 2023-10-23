#pragma once
#include "include.h"

void QuickSort(int A[], long int start, long int end) {

    if (start >= end)
        return;

  
    long int p = Partition(A, start, end);
    QuickSort(A, start, p - 1);


    QuickSort(A, p + 1, end);
    
    


}



