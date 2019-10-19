#include "task2.h"

template <typename T>

T gen() {
	return 0;
}

int main() {
	const size_t N = 10;
	size_t* mas;
	mas = createArr<size_t, N>(gen);
	for (size_t i = 0; i < N; i++)
		cout << mas[i] << " ";
}
