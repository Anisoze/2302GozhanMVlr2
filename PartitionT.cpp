#pragma once
#include "include.h"


void PartitionT(int A[], int N, Stack** Cur, int minrun) {
	int i = 0, lenrun = 1, startrun=0;
	bool incr = true, f = false;
	while (i+1 < N) {		
		if (A[i] <= A[i+1]) {
			if (incr) {
				i++;
				lenrun++;
			}
			else {
				if (lenrun >= minrun) {
					Reverse(A,startrun,startrun+lenrun);
					if (f != 0) {
						(*Cur)->pNext = new Stack;
						(*Cur)->pNext->pPrev = (*Cur);
						(*Cur) = (*Cur)->pNext;
						(*Cur)->pNext = NULL;
					}
					(*Cur)->start = startrun;
					(*Cur)->end = startrun + lenrun;
					(*Cur)->size = lenrun;
					f = 1;
					startrun += lenrun;
					i = startrun;
				}
				else {
					if (startrun + minrun < N) {
						InsertionSort(A, startrun, startrun + minrun);
					}
					else {
						InsertionSort(A, startrun, N);
					}
					
					if (f != 0) {
						(*Cur)->pNext = new Stack;
						(*Cur)->pNext->pPrev = (*Cur);
						(*Cur) = (*Cur)->pNext;
						(*Cur)->pNext = NULL;
					}
					(*Cur)->start = startrun;
					if (startrun + minrun < N) {
						(*Cur)->end = startrun + minrun;
						(*Cur)->size = minrun;
					}
					else {
						(*Cur)->end = N;
						(*Cur)->size = N - startrun;
					}
					f = 1;
					startrun += minrun;
					i = startrun;
				}
				lenrun = 1;
				incr = true;
			}
		}
		else {
			if (incr && lenrun!=1) {
				if (lenrun >= minrun) {
					if (f != 0) {
						(*Cur)->pNext = new Stack;
						(*Cur)->pNext->pPrev = (*Cur);
						(*Cur) = (*Cur)->pNext;
						(*Cur)->pNext = NULL;
					}
					(*Cur)->start = startrun;
					(*Cur)->end = startrun + lenrun;
					(*Cur)->size = lenrun;
					f = 1;
					startrun += lenrun;
					i = startrun;
				}
				else {
					
					if (startrun + minrun < N) {
						InsertionSort(A, startrun, startrun + minrun);
					}
					else {
						InsertionSort(A, startrun, N);
					}
					if (f != 0) {
						(*Cur)->pNext = new Stack;
						(*Cur)->pNext->pPrev = (*Cur);
						(*Cur) = (*Cur)->pNext;
						(*Cur)->pNext = NULL;
					}
					(*Cur)->start = startrun;
					if (startrun + minrun < N) {
						(*Cur)->end = startrun + minrun;
						(*Cur)->size = minrun;
					}
					else {
						(*Cur)->end = N;
						(*Cur)->size = N - startrun;
					}
					f = 1;
					startrun += minrun;
					i = startrun;
				}
				incr = false;
				lenrun = 1;
			}
			else {
				i++;
				lenrun++;
				incr = false;
			}
		}
	}
	if (lenrun != 1) {
		if (!incr) {
			Reverse(A, startrun, N);
		}
		if (f != 0) {
			(*Cur)->pNext = new Stack;
			(*Cur)->pNext->pPrev = (*Cur);
			(*Cur) = (*Cur)->pNext;
			(*Cur)->pNext = NULL;
		}
		(*Cur)->start = startrun;
		(*Cur)->end = N;
		(*Cur)->size = N - startrun;
	}
	
}