/*
 * TestMain.cpp
 *
 *  Created on: 2016. 11. 10.
 *      Author: jsryu21
 */
#include <cstdio>
#include <cassert>
#include <tchar.h>
#include <windows.h>

#include "DelegateSample/DelegateSample.h"
#include "TestDelegateSample/TestDelegateSample.h"

int main()
{
	printf("Hello World!\n");

	// DelegateSample test
	DelegateSample(Callback, 500);
	assert(DelegateSample2(Callback2, 500) == 500);

	// windows memory function test
	const int length = 100;
	TCHAR sampleData[length];

	ZeroMemory(sampleData, length * sizeof(TCHAR));
	for (int i = 0; i < length; ++i)
	{
		assert(sampleData[i] == TCHAR(0));
	}

	const int fillData = 2;
	FillMemory(sampleData, length * sizeof(TCHAR), fillData);
	for (int i = 0; i < length; ++i)
	{
		assert(sampleData[i] == TCHAR(fillData));
	}

	TCHAR dstSampleData[length];
	CopyMemory(dstSampleData, sampleData, length);
	for (int i = 0; i < length; ++i)
	{
		assert(sampleData[i] == dstSampleData[i]);
	}

	TCHAR result_str[] = "memmove can be very very useful.";
	TCHAR str[] = "memmove can be very useful......";
	MoveMemory(str + 20, str + 15, 11);
	for (size_t i = 0; i < _tcslen(result_str); ++i)
	{
		assert(result_str[i] == str[i]);
	}

	for (int i = 0; i < 10; ++i)
	{
		sampleData[i] = (i + 1) % 10;;
	}
	TCHAR* p_sampleData = sampleData + 6;
	assert(p_sampleData[0] == 7);
	assert(p_sampleData[1] == 8);
	assert(p_sampleData[2] == 9);
	assert(p_sampleData[3] == 0);

	// TCHAR string function test
	const TCHAR* srcStr = _T("가나다라");
	_tcscpy(sampleData, srcStr);
	assert(_tcscmp(srcStr, sampleData) == 0);

	ZeroMemory(dstSampleData, length * sizeof(TCHAR));
	_tcsncpy(dstSampleData, srcStr, _tcslen(srcStr));
	assert(_tcscmp(srcStr, dstSampleData) == 0);

	_tprintf("src : %s\n", srcStr);
	_tprintf(" -> dst1 : %s\n", sampleData);
	_tprintf(" -> dst2 : %s\n", dstSampleData);

	ZeroMemory(sampleData, length * sizeof(TCHAR));
	_stprintf(sampleData, "%s%s", srcStr, srcStr);
	ZeroMemory(dstSampleData, length * sizeof(TCHAR));
	_sntprintf(dstSampleData, sizeof(dstSampleData), "%s%s", srcStr, srcStr);

	_tprintf("src : %s%s\n", srcStr, srcStr);
	_tprintf(" -> dst1 : %s\n", sampleData);
	_tprintf(" -> dst2 : %s\n", dstSampleData);

	return 0;
}

