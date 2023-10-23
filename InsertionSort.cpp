#pragma once
#include "include.h"

void InsertionSort(int A[], int start, int end) {
	int key, j;
	for (int i = start; i < end; i++) {
		key = A[i];
		j = i - 1;
		while (j >= start && A[j] > key) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
	}
}