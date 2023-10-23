#pragma once
#include "include.h"

void SelectionSort(int A[], int N) {
	int tmp, key, j;
	for (int i = 0; i < N - 1; i++){
		tmp = A[i]; 
		key = i;
		for (j = i + 1; j < N; j++) {
			if (A[j] < A[key]) {
				key = j;
			}
		}
		if (key != i){
			A[i] = A[key];
			A[key] = tmp;
		}
	}	
}