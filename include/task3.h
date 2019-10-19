#pragma once
template <typename T, size_t N>

void map(T* arr, T(*change)()) {
	for (size_t i = 0; i < N; i++)
		arr[i] = change();
}