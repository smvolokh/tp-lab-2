#include <iostream>
#include "task3.h"
using namespace std;
template <typename T>
T change() {
	return 0;
}
int main() {
	const int N = 5;
	double array[N] = { 13.2, 11.41, -4.65, 13.0, 2.13 };
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	cout << endl;
	map<double, N>(array, change);
	for (int i = 0; i < N; i++)
		cout << array[i] << " ";
	cout << endl;
}