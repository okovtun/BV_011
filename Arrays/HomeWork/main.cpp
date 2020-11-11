#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
#define homework_task_1
#define homework_task_2
#define homework_task_3
void main()
{
	setlocale(LC_ALL, "");
#ifdef homework_task_1
	unsigned int numb;
	unsigned long fact = 1;
	cout << "Задача 1. Вычесление факториал числа\n" << "Введите целое число: ";
	cin >> numb;
	for (int i = numb; i > 0; i--)
		fact *= i;
	cout << "Факториал числа равен: " << fact << endl;
	/* 1. Используя цикл for, написать программу, которая вычисляет факториал числа, введенного с клавиатуры;*/
#endif
#ifdef homework_task_2
	int x, n, b;
	cout << "Задача 2. Возведение в степень числа\n";
	cout << "Enter the number: "; cin >> x; cout << "\n";
	cout << "Enter the power: ";  cin >> n; cout << "\n";
	b = x;
	for (int i = 1; i < n; i++) {
		b = b * x;
	}
	cout << "The result is: " << b << endl;
	/* 2. Исползуя цикл for возвести указанное число, в указанную степень;*/
#endif
#ifdef homework_task_3
	int numb2;
	cout << "Задача 3.\tТаблица ASCII (American Standart Code Information Interchange)" << endl;
	for (int i = 1; i < 256; i++)
	{
		cout << (char)i << setw(5);
	}
	cout << endl;
	/*3. Вывести на экран таблицу ASCII - символов, разделенных пробелами, по 16 символов в строке.*/
#endif	
}

