#pragma once
#include "include.h"

void Reverse(int A[], int start, int end) {
	int mid =(end - start) / 2;
	int tmp;
	for (int i = 0; i < mid; i++) {
		tmp = A[start + i];
		A[start + i] = A[end-1- i];
		A[end-1 - i] = tmp;
	}
}