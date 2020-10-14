#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i = 0;	//Счетчик цикла
	int n;	//Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (n--)
	{
		cout << n << ".        Привет\n";
		//i++;
	}
	cout << n << endl;

}