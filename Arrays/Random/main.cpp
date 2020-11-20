#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];

	//////////////////////////////////////// FillRand //////////////////////////////////////////////////

	//srand(time(NULL));
	int minRand = 100;
	int maxRand = 100;
	do
	{
		cout << "¬ведите минимальное случайное число: "; cin >> minRand;
		cout << "¬ведите максимальное случайное число: "; cin >> maxRand;
	} while (minRand == maxRand);
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
	///////////////////////////////////////////////////////////////////////////////////
	cout << "»сходный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	/////////////////////////////////////// —ортировка ////////////////////////////////////////////

	for (int i = 0; i < n; i++)	
	{
		//—четчик 'i' выбирает элемент, в который нужно поместить минимальное значение 
		//из области перебора.
		for (int j = i + 1; j < n; j++)
		{
			//счетчик 'j' перебирает элементы.
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	cout << "ќтсортированный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}