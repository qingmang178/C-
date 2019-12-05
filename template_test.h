#pragma once
#ifndef template_test_ 
#define template_test_

#include<iostream>


template<class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;

}

template<class T>
T maxElement(T a[], int size)
{
	T tmpMax = a[0];
	for (int i = 1; i < size; ++i)
	{
		if (tmpMax < a[i])
			tmpMax = a[i];
	}
	return tmpMax;
}













#endif  
