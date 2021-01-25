#include<iostream>
using namespace std;

void elevator(int level)
{
	if (level < 0)return;
	cout << level << endl;
	elevator(level - 1);		//Рекурсивный вызов
	cout << level << endl;
}

double factorial(int n)
{
	//	condition ? expression1 : expression2;
	return n == 1 ?		1		: n * factorial(n - 1);

	//if (n == 1)return 1;
	////return n * factorial(n - 1);
	//double f = n * factorial(n - 1);
	//cout << n << "! = " << f << endl;
	//return f;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Hello World!";
	//main();

	/*int n;
	cout << "На каком Вы этаже: "; cin >> n;
	elevator(n);*/

	int n;
	cout << "Введите число, для вычисления факториала: "; cin >> n;
	cout << factorial(n) << endl;
}

/*
-----------------
Stack (Стопка) -
LIFO - Last In - First Out
-----------------
*/