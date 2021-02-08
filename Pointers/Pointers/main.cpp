#include<iostream>
using namespace std;

/*
-------------------------------------
Pointer - это переменная, которая хранит адрес другой переменной.
Адрес - это число, длиной 4 Байта, 
означающее порядковый номер Байта в оперативной памяти.
Hexadecimal (0x...)
0x00 - 1 Byte;
0x0000 - 2 Bytes;
0x0000 0000 4 Bytes;
-------------------------------------
*/

//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;	//Объявляем переменную 'a'
	int* pa = &a;//Объявляем указатель 'pa', и инициализируем его адресом переменной 'a'
	cout << a << endl;	//Выводим на экран значение переменной 'a'.
	cout << &a << endl;	//Получаем адрес переменной 'a' прямо при выводе на экран
	cout << pa << endl;	//Выводим на экран адрес переменной 'a', хранящийся в указателе 'pa'
	cout << *pa << endl;//Разыменовываем указатель 'pa' и получаем значение по адресу

	//pa - буква 'p' в начале имени показывает программисту, что переменная - указатель
	//pa читается как Pointer to 'a'. (Венгерская нотация)
	//https://ru.wikipedia.org/wiki/%D0%92%D0%B5%D0%BD%D0%B3%D0%B5%D1%80%D1%81%D0%BA%D0%B0%D1%8F_%D0%BD%D0%BE%D1%82%D0%B0%D1%86%D0%B8%D1%8F

	////////////////
	int* pb;	//Объявляем указатель 'pb'
	int b = 3;
	pb = &b;
	//(int*)(int*)
		//int  - int
		//int* - Указатель на int
		//char  - char
		//char* - указатель на char
		//double  - double
		//double* - указатель на double.  
#endif // POINTERS_BASICS
	
	using std::cin;
	using std::cout;
	using std::endl;
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	//		Pointer arithmetics
	/*
	-------------------------------------------
		+, -, ++, --
		char*	- 1 Byte
		short*	- 2 Byte
		int*	- 4 Byte
		double*	- 8 Byte 
	-------------------------------------------
	*/
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

	int* p_arr = arr;
	for (int i = 0; i < n; i++)
	{
		cout << *p_arr++ << "\t";
	}
	cout << endl;
	cout << *arr << endl;
}