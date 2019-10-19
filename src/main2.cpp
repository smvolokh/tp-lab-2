#include <iostream>
#include "task2.h"
using namespace std;
template <typename T>

T gen() {
	return 0;
}


int main() {
	const int N = 10;
	int* mas;
	mas = createArr<int, N>(gen);
	for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
	return 0;
}
