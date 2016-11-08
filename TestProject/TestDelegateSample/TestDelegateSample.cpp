#include <cstdio>

#include "DelegateSample/DelegateSample.h"
#include "TestDelegateSample.h"

int main()
{
	printf("Hello World!\n");
	DelegateSample(Callback, 500);
	return 0;
}

void Callback(int result1, int result2)
{
	printf("# result1 : %d, result2 : %d\n", result1, result2);
}
