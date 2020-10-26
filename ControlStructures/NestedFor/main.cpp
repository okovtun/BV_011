#include<iostream>
#include<Windows.h>
using namespace std;

//#define SIMPLE_NUMBERS

void main()
{
	setlocale(LC_ALL, "");
	/*int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}*/

	/*const int HOURS = 12;
	const int MINUTES = 60;
	const int SECONDS = 60;
	for (int hour = 0; hour < HOURS; hour++)
	{
		for (int minute = 0; minute < MINUTES; minute++)
		{
			for (int second = 0; second < SECONDS; second++)
			{
				Sleep(100);
				system("CLS");
				cout << hour << ":" << minute << ":" << second << endl;
			}
		}
	}*/

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите число: "; cin >> n;
	int count = 0;	//Количество протых чисел
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;	//Предположим что число простое, но это нужно проверть
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)count++;//cout << i << "\t";
	}
	cout << "Количество простых чисел: " << count << endl;
	cout << endl;
#endif // SIMPLE_NUMBERS

}
