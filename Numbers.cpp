#pragma once
#include "include.h"
#include <stdlib.h>
#include <time.h>

void Numbers(int n, int k) {
	std::cout << "\n";
	srand(time(NULL));
	std::fstream q;
	q.open("in10reversesorted.txt", std::ios::out);

	if (k == 1) {
		for (int i = 1; i <= n; i++) {
			q << i << "\n";
		}
	}

	if (k == 2) {
		for (int i = 1; i <= n / 2; i++) {

			q << i << "\n";
		}
		for (int i = n / 2 + 1; i <=n; i++) {
			q << rand() << "\n";
		}
	}
		
	else if (k == 3) {
		for (int i = n; i >=1; i--) {
			q << i << "\n";
		}
	}

	else if (k == 4) {
		for (int i = 1; i <=n; i++) {
			q << rand() << "\n";
		}
	}
}