#pragma once
#include <iostream>
using namespace std;

template < typename T, int N >

T* createArr(T(*gen)()) {
	T* temp = new T[N];
	for (int i = 0; i < N; i++)
		temp[i] = gen();
	return temp;
}