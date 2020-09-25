#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << false << "\n";
	
	/*cout << (bool)0.0001 << endl;
	bool summer = false;
	int temperature;
	cin >> temperature;
	cout << (temperature > 20) << endl;*/

	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << 0 << "\t" << USHRT_MAX << endl;
}
	//Переменные и типы данных
	//Переменная (Variable) - это именованная область памяти, 
	//содержимое которой может изменяться в процессе выполнения программы.

	//			type name;		//синтаксис объявление переменной
	//type - тип переменной. Он определяет

/*
----------------------------------------

1. Логические типы: bool (Boolean) 1 Byte
	true - 1
	false- 0
	0 - это false, a true - это все что НЕ НОЛЬ!!!

2. Символьные типы: char (Character - символ) 1 Byte ASCII 256

3. Числовые типы.
	unsigned
	  signed
--------------------
	short	2B
	long	4B
	int		2-4B
	long long	8B



----------------------------------------
*/