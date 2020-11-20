#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
	int rand_MAX = 10;


	//Initilize array with random elements between 0 and 9
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % rand_MAX;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;
	bool correction = true;
	while (correction)
	{
		correction = false;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int buffer = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = buffer;
				correction = true;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
			cout << arr[i] << "\t";
	}
	cout << endl;

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;*/
}