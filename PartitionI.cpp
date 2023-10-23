#pragma once
#include "include.h"
int* PartitionI(int arr[], int low, int high){
    int pivot = arr[high];   
    int i = (low - 1);  

    for (int j = low; j <= high - 1; j++)
    {
      
        if (arr[j] <= pivot)
        {
            i++;

            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (arr + i + 1);
}