#pragma once
#include <string.h>

template <typename T>
bool cmp(T a, T b) {
	return a < b;
}

template <>
bool cmp<char*>(char* a, char* b) {
	return strlen(a) < strlen(b);
}
template <typename T>
void merge(T* arr, int left, int right) {
	int first = left, middle = (left + right) / 2, second = middle + 1;
	T * result = new T[right];
	for (int j = 0; j < right; j++)
		result[j] = 0;
	int i = 0; // index for result
	while (first <= middle && second <= right) {
		if (cmp(arr[first], arr[second])) {
			result[i] = arr[first];
			first++;
		}
		else {
			result[i] = arr[second];
			second++;
		}
		i++;
	}

	while (first <= middle) {
		result[i] = arr[first];
		i++;
		first++;
	}
	while (second <= right) {
		result[i] = arr[second];
		i++;
		second++;
	}

	for (i = 0; i < second; i++)
		arr[left + i] = result[i];
}



template <typename T>
void msort(T * arr, int left, int right) {
	if (left < right)
		if (right - left == 1) {
			if (!(cmp(arr[left], arr[right]))) {
				T temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
		}
		else {
			int middle = (left + right) / 2;
			msort(arr, left, middle);
			msort(arr, middle + 1, right);
			merge(arr, left, right);
		}

}

template <typename T>
void msort(T* arr, int n) {
	msort(arr, 0, n - 1);
}