#include<iostream>
#include<locale>
#include<Windows.h>
using namespace std;

int StrLen(char str[]);
void to_upper(char str[]);	//Переводит строку в верхний регистр
void to_lower(char str[]);	//Переводит строку в нижний регистр
void shrink(char str[]);	//Удаляет лишние пробелы из предложения
							//Hello      World => Hello World

void main()
{
	setlocale(LC_ALL, "RU");
	//sz_ - String Zero
	//char sz_str[] = { 'H', 'e', 'l', 'l', 'o', 0 };

	/*char sz_str[] = "Hello";
	cout << sz_str << endl;
	cout << sizeof(sz_str) << endl;
	cout << sizeof("Hello") << endl;*/

	cout << 'A' - 'a' << endl;

	const int n = 256;
	char str[n] = {};
	cout << "Введите строку: ";
	//cin >> sz_str;//Для cin, пробел является основным разделителем, и если что-то вводится через пробел, то сохраняется в разных переменных.
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Размер буфера: " << sizeof(str) << endl;
	cout << "Размер строки: " << StrLen(str) << endl;
	to_upper(str);	//Преобразуем строку в верхний регистр
	cout << str << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
/*
-----------------------------------
for(Counter; Condition; Expression)
{
	....
	group-of-statements;
	....
}

-----------------------------------
*/
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		//if (
		//	str[i] >= 'a' && str[i] <= 'z' || //Элемент строки - маленькая английская бкува
		//	str[i] >= 'а' && str[i] <= 'я' //Элемент строки - маленькая русская бкува
		//	)
		//	str[i] -= 32;
		str[i] = toupper(str[i]);	//toupper() - это строенная функция из библиотеки ctype.h,
		//которая переводит символ в верхний регистр
	}
}