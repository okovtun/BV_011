#include<iostream>
using namespace std;

void elevator(int level);
double factorial(int n);
double power(double a, int n);
void Fibonacci(int n, double a = 0, double b = 1);

//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Hello World!";
	//main();

	/*int n;
	cout << "На каком Вы этаже: "; cin >> n;
	elevator(n);*/

#ifdef FACTORIAL
	int n;
	cout << "Введите число, для вычисления факториала: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;	//Основание степени
	int n;	//Показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int n;	//Количество чисел из ряда Фибоначчи
	cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> n;
	Fibonacci(n);
}

/*
-----------------
Stack (Стопка) -
LIFO - Last In - First Out
-----------------
*/

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
	return n == 1 ? 1 : n * factorial(n - 1);

	//if (n == 1)return 1;
	////return n * factorial(n - 1);
	//double f = n * factorial(n - 1);
	//cout << n << "! = " << f << endl;
	//return f;
}
double power(double a, int n)
{
	//	condition ? value1	: value2;
	return n == 1 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);

	/*if (n == 0)return 1;
	if (n > 0)return a * power(a, n - 1);
	else return 1 / a * power(a, n + 1);*/
}
void Fibonacci(int n, double a, double b)
{
	/*if (n == 0)return 0;
	if (n == 1)return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);*/
	if (n == 0)return;
	cout << a << "\n";
	Fibonacci(n - 1, b, a + b);
}