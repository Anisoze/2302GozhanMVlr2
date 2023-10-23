#pragma once
#include "include.h"

struct Stack
{
	int start;
	int end;
	int size;
	Stack* pNext;
	Stack* pPrev;
};