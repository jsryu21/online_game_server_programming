#include <cstdio>

#include "TestDelegateSample.h"

void Callback(int result1, int result2)
{
	printf("# result1 : %d, result2 : %d\n", result1, result2);
}

int Callback2(int param)
{
	return param;
}
