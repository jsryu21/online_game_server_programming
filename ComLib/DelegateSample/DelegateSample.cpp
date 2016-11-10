#include <cstdio>
#include "DelegateSample.h"

void DelegateSample(void (*fp)(int, int), int data)
{
	printf("# DelegateSample function #\n");
	fp(data / 100, data / 100);
}

int DelegateSample2(int (*fp)(int), int data)
{
	return fp(data);
}
