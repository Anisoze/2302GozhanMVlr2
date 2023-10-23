#pragma once
#include <fstream>
#include <iostream>
#include "Stack.h"

int Ask();
bool Read(int A[]);
void Out(std::fstream& g, int A[], const int N);
void SelectionSort(int A[], int len);
void InsertionSort(int A[], int start, int end);
void InsertionSortI(int A[], int* start, int* end);
void BubbleSort(int A[], int N);
void MergeSort(int A[], int const start, int const end);
void Merge(int A[], int const left, int const mid, int const right, int t);
void QuickSort(int A[], long int start, long int end);
int Partition(int A[], long int start, long int end);
int* PartitionI(int A[], int start, int end);
void ShellSort1(int A[], int N);
void ShellSort2(int A[], int N);
int Increment(int inc[], int N);
void ShellSort3(int A[], int N);
void HeapSort(int A[], int N);
void Heapify(int A[], int N, int i);
void TimSort(int A[], int N);
void Introsort(int A[], int* begin, int* end);
void IntrosortUtil(int A[], int* begin, int* end, int depthLimit);
int* MedianOfThree(int* a, int* b, int* c);
void SwapValue(int* a, int* b);
void Numbers(int n, int k);
int Increment2(int seq[], int N);
void PartitionT(int A[], int N, Stack** Cur, int minrun);
void Reverse(int A[], int start, int end);

