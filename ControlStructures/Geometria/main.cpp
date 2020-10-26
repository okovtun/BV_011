#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число: "; cin >> n;
	for (int i = 0; i < n; i++)//Повторяет вывод строки на экран, 'n' раз.
	{
		for (int j = i; j < n; j++)//Повторяет вывод одной звездочки 'n' раз.
		{
			cout << "* ";
		}
		cout << endl;
	}
}