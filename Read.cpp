#pragma once
#include "include.h"

bool Read(int A[]) {
	std::fstream f;
	f.open("in70000random.txt", std::ios::in);
	if (f.is_open()) {
		int tmp, i = 0;
		f >> tmp;
		while (!f.eof()) {
			A[i] = tmp;
			f >> tmp;
			i++;
		}
		A[i] = tmp;
		return true;
	}
	else {
		return false;
	}
}

