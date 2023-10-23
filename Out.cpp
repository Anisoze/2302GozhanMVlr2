#pragma once
#include "include.h"

void Out(std::fstream& g, int A[], const int N) {
		for (int i = 0; i < N; i++) {
			g << A[i] << "\n";
		}
}