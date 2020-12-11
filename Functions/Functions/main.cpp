#include<iostream>
using namespace std;

//Unresolved externals
//LNK - Linker компоновщик, сборщик
//Unresolved external symbol...

int add(int a = 2, int b = 3, int c = 0);	//Прототип функции (Function declaration - Объявление функции)
int sub(int a, int b);
int mul(int a, int b);
double my_div(double a, double b);
int power(int a, int n);
int kakayatofunkciya(int a);

void main()
{
	//kakayatofunkciya(1);
	setlocale(LC_ALL, "Russian");
	int num1, num2;
	cout << "Введите два числа: "; cin >> num1 >> num2;
	int c = add(num1, num2, 5);	//Вызов функции (Function call)
	cout << c << endl;
	cout << sub(num1, num2) << endl;
	cout << mul(num1, num2) << endl;
	cout << my_div(num1, num2) << endl;
	cout << power(num1, num2) << endl;

	cout << add(7, 8) << endl;
	cout << add(8, 8, 32) << endl;
	cout << add() << endl;

	//Too many arguments in function call
	//Too few arguments in function call
	//Function doesn't take N arguments
}

int add(int a, int b, int c)	//Реализация функции (Function definition - Определение функции)
{
	int sum = a + b + c;
	return sum;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
double my_div(double a, double b)
{
	return a / b;
}
int power(int a, int n)
{
	int N = 1;
	for (int i = 0; i < n; i++)
	{

		N *= a;
	}
	return N;
}