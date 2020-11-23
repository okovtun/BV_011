#include<iostream>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 10;
	int arr[n] = { };
	for (int i = 0; i < n; i++)	arr[i] = rand() % 4;
	cout << "Произвольный массив:" << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";
	cout << endl << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	int shift = 0, amount = 0, number = 0;
	for (int i = 0; i < n; i += amount)
	{
		amount = 1;
		for (int j = ++shift; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				amount++;
				shift++;
				number = arr[i];
			}
		}
		if (amount > 1) cout << "Число \"" << number << "\"" << " встречается " << amount << " раз(-а) в данном массиве!" << endl;

	}
	cout << endl;
	system("PAUSE");
}