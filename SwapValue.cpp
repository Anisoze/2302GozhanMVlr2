#pragma once
#include "include.h"
void SwapValue(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
    return;
}