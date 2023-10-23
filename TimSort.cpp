#pragma once
#include "include.h"

void TimSort(int A[], int N) {

    if (N <= 64) {
        InsertionSort(A, 0, N);
    }
    else {
        int r = N, r1 = 0;
        while (r > 64) {
            r1 |= r & 1;
            r >>= 1;
        }
        int minrun = r + r1;
        Stack* Beg = new Stack;
        Beg->pPrev = NULL;
        Stack* Cur = Beg;
        Stack* Tmp;

        PartitionT(A, N, &Cur, minrun);
        bool w = true;
        while (w) {
            w = false;
            if (Cur->pPrev != NULL) {
                if (Cur->pPrev->pPrev != NULL) {
                    if (Cur->pPrev->pPrev->pPrev != NULL) {
                        if (Cur->pPrev->pPrev->pPrev->size <= Cur->pPrev->pPrev->size + Cur->pPrev->size) {
                            w = true;
                            if (Cur->pPrev->pPrev->pPrev->size < Cur->pPrev->size) {
                                Merge(A, Cur->pPrev->pPrev->pPrev->start, Cur->pPrev->pPrev->start, Cur->pPrev->pPrev->end, 0);
                                Cur->pPrev->pPrev->size+=Cur->pPrev->pPrev->pPrev->size;
                                Cur->pPrev->pPrev->start = Cur->pPrev->pPrev->pPrev->start;
                                Tmp = Cur->pPrev->pPrev->pPrev;
                                Cur->pPrev->pPrev->pPrev = Cur->pPrev->pPrev->pPrev->pPrev;
                                delete Tmp;
                            }
                            else {
                                Merge(A, Cur->pPrev->pPrev->start, Cur->pPrev->start, Cur->pPrev->end, 0);
                                Cur->pPrev->size+=Cur->pPrev->pPrev->size;
                                Cur->pPrev->start = Cur->pPrev->pPrev->start;
                                Tmp = Cur->pPrev->pPrev;
                                Cur->pPrev->pPrev = Cur->pPrev->pPrev->pPrev;
                                delete Tmp;
                            }
                            continue;
                        }
                    }    
                    if (Cur->pPrev->pPrev->size <= Cur->pPrev->size + Cur->size) {
                        w = true;
                        if (Cur->pPrev->pPrev->size < Cur->size) {
                            Merge(A, Cur->pPrev->pPrev->start, Cur->pPrev->start, Cur->pPrev->end, 0);
                            Cur->pPrev->size += Cur->pPrev->pPrev->size;
                            Cur->pPrev->start = Cur->pPrev->pPrev->start;
                            Tmp = Cur->pPrev->pPrev;
                            Cur->pPrev->pPrev = Cur->pPrev->pPrev->pPrev;
                            delete Tmp;
                        }
                        else {
                            Merge(A, Cur->pPrev->start, Cur->start, Cur->end, 0);
                            Cur->size+= Cur->pPrev->size;
                            Cur->start = Cur->pPrev->start;
                            Tmp = Cur->pPrev;
                            Cur->pPrev = Cur->pPrev->pPrev;
                            delete Tmp;
                        }
                        continue;
                    }
                }
                if (Cur->size >= Cur->pPrev->size) {
                    w = true;
                    Merge(A, Cur->pPrev->start, Cur->start, Cur->end, 0);
                    Cur->size+=Cur->pPrev->size;
                    Cur->start = Cur->pPrev->start;
                    Tmp = Cur->pPrev;
                    Cur->pPrev = Cur->pPrev->pPrev;
                    delete Tmp;
                }
            }
        }

        while (Cur->pPrev != NULL) {
            Merge(A, Cur->pPrev->start, Cur->start, Cur->end, 0);
            Cur->size += Cur->pPrev->size;
            Cur->start = Cur->pPrev->start;
            Tmp = Cur->pPrev;
            Cur->pPrev = Cur->pPrev->pPrev;
            delete Tmp;
        }
    }

}









