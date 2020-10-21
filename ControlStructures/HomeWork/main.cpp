#include <iostream>
#include <conio.h>
#include<Windows.h>

using namespace std;

//#define FACTORIAL
#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	double factorial = 1; // фактоиал изначально равен 1, сначала поставил 0 и результаты всегда равнялись 0.
	int n; // вводимое число
	cout << " \t\ Введите число для определения его факториала: "; cin >> n;

	for (int i = 1; i <= n; ++i) // вычисляем на что умножаем введеное число.
	{
		cout << i << "! = ";
		factorial = factorial * i;
		cout << factorial << endl;
	}
	cout << " \t\ Факториал числа " << n << " = " << factorial << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//Основание степени
	int n;	//Показатель степени
	double N = 1;	//Cтепень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	//cout << a << " ^ " << n << " = ";
	cout << N << endl;
#endif

#ifdef ASCII
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	for (int i = 0; i < 256; ++i)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

		// по 16 символов в строке чего-то не получается. Всё в один столб.
}
#endif // ASCII

}