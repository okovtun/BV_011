#include<iostream>
//using namespace std;

using std::cin;
using std::cout;
using std::endl;

#include"Array.h"
#include"FillRand.h"
#include"Memory.h"
#include"Print.h"


//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
	int n;	//Размер массива
	cout << "Введите размер массива: "; cin >> n;

	//Объявление динамческого массива:
	int* arr = new int[n];
	/*int s_arr[5];
	cout << sizeof(arr) << endl;;//sizeof() возвращает размер указателя
	cout << sizeof(s_arr) << endl;
	Print(s_arr, n);*/
	FillRand(arr, n);
	Print(arr, n);

	int value;	//Значение добавляемое в массив

	//Добавление значения в конец массива:
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);

	//Добавление значения в начало массива:
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	cout << "Удавление элемента с конца массива:\n";
	arr = pop_back(arr, n);
	Print(arr, n);

	cout << "Удавление элемента с начала массива:\n";
	arr = pop_front(arr, n);
	Print(arr, n);

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

	int a = 2;
	int* pa = &a;
	int** p = &pa;

	//int - int
	//int* - Указатель на int
	//int** - Указатель на указатель на int

#ifdef DYNAMIC_MEMORY_2
	int m;	//Количество строк
	int n;	//Количество столбцов
	cout << "Введите количество строк:   "; cin >> m;
	cout << "Введите количество столбцов:"; cin >> n;

	//////////////////////////////////////////////////////////////////////////////////
	////////////////////////		ОБЪЯВЛЕНИЕ МАССИВА		//////////////////////////
	//////////////////////////////////////////////////////////////////////////////////
	typedef double DataType;
	DataType** arr = Allocate<DataType>(m, n);

	//////////////////////////////////////////////////////////////////////////////////
	///////////////////////		ИСПОЛЬЗОВАНИЕ МАССИВА		//////////////////////////
	//////////////////////////////////////////////////////////////////////////////////

	//				Обращение к элементам массива:
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "Memory allocated" << endl;
	//cout << "Pushing row back..." << endl;
	//cout << "Размер массива: " << sizeof(arr) << endl;
	cout << "Добавляем строку в конец массива: " << endl;
	arr = push_row_back(arr, m, n);
	cout << "Строка добавлена :-)" << endl;
	Print(arr, m, n);
	cout << "Добавляем строку в начало массива: " << endl;
	arr = push_row_front(arr, m, n);
	Print(arr, m, n);
	cout << "Добавляем столбец в конец массива: " << endl;
	push_col_back(arr, m, n);
	Print(arr, m, n);

	//////////////////////////////////////////////////////////////////////////////////
	////////////////////////		УДАЛЕНИЕ МАССИВА		//////////////////////////
	//////////////////////////////////////////////////////////////////////////////////

	Clear(arr, m);
	
#endif // DYNAMIC_MEMORY_2

	cout << "That's okey" << endl;
}