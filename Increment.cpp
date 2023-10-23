#pragma once
#include "include.h"
#include <cmath>

int Increment(int seq[], int N) {

    int i = 0, r = 0;
    while (i < 15 && r < N) {
        if (i % 2 == 0) {
            r = 9 * (std::pow(2, i) - std::pow(2, i / 2)) + 1;
        }
        else {
            r = 8 * std::pow(2, i) - 6 * std::pow(2, (i + 1) / 2) + 1;
        }
        if(r<N){
            seq[i] = r;
            i++;
        }
        else {
            return i-1;
        }
    }
}