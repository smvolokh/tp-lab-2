#include "task3.h"

template < typename T >
T change(T x)
{
	return x+15;
}


int main() {
	const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100 + 1;
		cout << mas[i] << " ";
	}
	cout << endl;
	map<int, n>(mas, change);
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	
}