#pragma once
#include <iostream>

using namespace std;

template < typename T, size_t N >

T* createArr(T(*gen)()) {
	T* temp = new T[N];
	for (size_t i = 0; i < N; i++)
		temp[i] = gen();
	return temp;
}