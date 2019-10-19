#pragma once
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>
using namespace std;

template < typename T , int N>

void map(T arr[], T(*change)(T))
{
	for (int i = 0; i < N; i++) {
		arr[i] = change(arr[i]);
	}
}