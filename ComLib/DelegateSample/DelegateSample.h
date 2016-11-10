/*
 * DelegateSample.h
 *
 *  Created on: 2016. 11. 8.
 *      Author: jsryu21
 */

#ifndef DELEGATESAMPLE_H_
#define DELEGATESAMPLE_H_

void DelegateSample(void (*)(int, int), int);
int DelegateSample2(int (*)(int), int);

#endif /* DELEGATESAMPLE_H_ */
