#pragma once
#include "include.h"
#include <cmath>

int Increment2(int seq[], int N) {

    int i = 1, r = 0;
    while (i < 18 && r < N) {
        r = std::pow(2, i) - 1;
        
        if (r < N) {
            seq[i-1] = r;
            i++;
        }
        else {
            return i - 2;
        }
    }
}