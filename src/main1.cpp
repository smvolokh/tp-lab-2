#include "task1.h"

int main()
{
	srand(time(NULL));
	const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 100 + 1;
	}

	msort(mas, 0, n-1);
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}

	cout << "\n";

	char* array[n] = {(char*) "a", (char*)"abcd", (char*)"low", (char*)"gl", (char*)"enqweee" };
	msort(array, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << "\n";
	double dd[n];
	for (int i = 0; i < n; i++)
		dd[i] = (double)(rand() % 100 + 1) / (rand() % 20 + 1);
	msort(dd, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << dd[i] << " ";
}