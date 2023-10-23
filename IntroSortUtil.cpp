#pragma once
#include "include.h"
#include <algorithm>
void IntrosortUtil(int A[], int* begin, int* end, int depthLimit){
    // Count the number of elements 
    int size = end - begin;

    // If partition size is low then do insertion sort 
    if (size < 16)
    {
        InsertionSortI(A, begin, end);
        return;
    }

    // If the depth is zero use heapsort 
    if (depthLimit == 0)
    {
        std::make_heap(begin, end + 1);
        std::sort_heap(begin, end + 1);
        return;
    }

    // Else use a median-of-three concept to 
    // find a good pivot 
    int* pivot = MedianOfThree(begin, begin + size / 2, end);

    // Swap the values pointed by the two pointers 
    SwapValue(pivot, end);

    // Perform Quick Sort 
    int* partitionPoint = PartitionI(A, begin - A, end - A);
    IntrosortUtil(A, begin, partitionPoint - 1, depthLimit - 1);
    IntrosortUtil(A, partitionPoint + 1, end, depthLimit - 1);

    return;
}