//
//  main.cpp
//  IZ10V2
//
//  Created by Анна Горячева on 30.11.2020.
//

#include <iostream>
using namespace std;
//беда в инициализации массива...не понимаю какое число вписать или формулу?чтоб избежать овердофига нолей (((;
int main()
{
	const int n = 32;
	int arr[n], x;
	cout << "Введите десятичное число для перевода в двоичную систему: "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		arr[i] = x % 2;
		x /= 2;
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
