#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	do
	{
		system("CLS");
		int decimal, rank = 0;
		cout << "Введите десятичное число для конвертации в двоичный код: "; cin >> decimal;
		const int n = 32;
		int arr[n];
		cout << "\t\t\t\t\t      Результат: ";
		if (decimal < 0) cout << "-";
		int i = 0;
		for (; decimal; decimal /= 2, i++)
		{
			arr[i] = (decimal % 2) ? 1 : arr[i] = 0;
			;
			//if (decimal != 0) rank++;
		}
		//for (int i = rank; i >= 0; i--) cout << arr[i];
		for (i--; i >= 0; i--)
		{
			cout << arr[i];
			if (i % 4 == 0)cout << " ";
			if (i % 8 == 0)cout << " ";
		}
		cout << endl << "Для выхода нажмите Escape, для продолжения нажмите любую клавишу.\n";
	} while (_getch() != 27);
}