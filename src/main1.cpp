#include <iostream>
#include "task1.h"
using namespace std;


int main() {
	const size_t n = 5;
	int arr1[n] = { -4, 5, 11, 3, -3 };
	for (size_t i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;
	msort(arr1, 0, n - 1);
	for (size_t i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;

	char* arr2[n] = { (char*)"kraken", (char*)"abc", (char*)".s23", (char*)"tp-lab2", (char*)"gg" };
	for (size_t i = 0; i < n; i++)
		cout << arr2[i] << " ";
	cout << endl;
	msort(arr2, 0, n - 1);
	for (size_t i = 0; i < n; i++)
		cout << arr2[i] << " ";
}