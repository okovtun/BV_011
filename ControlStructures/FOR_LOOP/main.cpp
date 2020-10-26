#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	for (int i = 0, a = 0, b = 1; i < n; i++/*, b += a, a = b - a*/)
	{
		cout << a << "\t";
		a = (b += a) - a;
	}
}