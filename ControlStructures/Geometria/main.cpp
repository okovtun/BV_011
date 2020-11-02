#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANLE_1
//#define TRIANLE_2
//#define TRIANLE_3
//#define TRIANLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)	//Повторяет вывод строки на экран. i - номер строки
	{
		for (int j = 0; j < n; j++)//Повторяет вывод звездочки на экран. j считает длину строки (звездочки в строке)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // DEBUG

#ifdef TRIANLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANLE_2

#ifdef TRIANLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANLE_3

#ifdef TRIANLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANLE_4

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";
		//for (int j = 0; j < (n - i - 1) * 2; j++)
		for (int j = (i+1)*2; j < (n) * 2; j++)
		{
			cout << " ";
		}
		cout << "/";
		cout << endl;
	}
}