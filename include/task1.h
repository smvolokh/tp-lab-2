#pragma once
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

template< typename T >
bool compare(const T a, const T b)
{
	return a < b;
}

template<>
bool compare (char* a, char* b)
{
	return strlen(a) < strlen(b);
}

template < typename T >
void merg(T* arr, int begin, int end) {
	int mid = (begin+end)/2; // index of middle
	int i = begin; // index for left part of array
	int j = mid + 1; // index for right part of array
	int k = 0; // index for temp array
	T* temp = new T[end]; // temp array 
	// while index is not out of range
	while (i <= mid && j <= end) {
		// if arr[i] < arr[j]
		// or
		// if strlen(arr[i]) < strlen(arr[j])
		if (compare(arr[i], arr[j])) {
			temp[k] = arr[i];
			i++;
		}
		else {
			temp[k] = arr[j];
			j++;
		}
		k++;
	}
	// filling remains
	while (i <= mid) {
		temp[k] = arr[i];
		i++;
		k++;
	}
	// filling remains
	while (j <= end) {
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (i = 0; i < k; i++)
		arr[begin + i] = temp[i];
}


template< typename T >
void msort(T* arr, int left, int right)
{
	T temp;
	if (left < right)
		if (right - left == 1) {
			if (!(compare(arr[left], arr[right]))) {
				temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
		}
		else {
			msort(arr, left, (left+right)/2);
			msort(arr, (left+right)/2 + 1, right);
			merg(arr, left, right);
		}
			
	
}

template <typename T>
void msort(T* arr, int n) {
	msort(arr, 0, n - 1);
}

