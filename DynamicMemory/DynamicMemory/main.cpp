#include<iostream>
//using namespace std;

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int* arr, const int n);
void FillRand(int** arr, const int m, const int n);
void Print(int arr[], const int n);
void Print(int** arr, const int m, const int n);

//Добавление элементов
int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);

//Удавление элементов:
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);

////////////////////////////////////////////////////////////////////////
int** push_row_back(int** arr, int& m, const int n);	//Добавление строки в конец массива
int** push_row_front(int** arr, int& m, const int n);	//Добавление строки в начало массива

void push_col_back(int** arr, const int m, int& n);

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

	//1) Создаем массив указателей:
	int** arr = new int*[m];
	//2) Выделяем память под строки:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n] {};
	}

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

	//1) Удаляем строки двумерного массива:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
#endif // DYNAMIC_MEMORY_2


	cout << "That's okey" << endl;
}

void FillRand(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		//* - оператор разыменования, возвращает значение по адресу.
		*(arr + i) = rand() % 100;
	}
}
void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void Print(int arr[], const int n)
{
	//cout << "Размер массива: " << sizeof(arr) << endl;
	for (int i = 0; i < n; i++)
	{
		//[] - оператор индексирования, возвращает значение по индексу
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int* push_back(int arr[], int& n, int value)
{
	//////////////////////////////////////////////////////////////////////
	////////////	ДОБАВЛЕНИЕ ЗНАЧЕНИЯ В КОНЕЦ МАССИВА:	//////////////
	//////////////////////////////////////////////////////////////////////
	//1)Создаем буферный массив нужного размера (на 1 элемент больше), это будет наш новый массив:
	int* buffer = new int[n + 1];
	//2)Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)Удаляем исходный массив:
	//cout << typeid(arr).name() << endl;
	delete[] arr;
	//4)Подменяем адрес старого массива адресом нового массива:
	arr = buffer;
	//После этого в массиве 'arr' появился элемент, в который можно положить еще одно значение
	//5)Помещаем добавляемое значение в конец массива:
	arr[n] = value;
	//6)После того как в массив добавился элемент, количество его элементов увелчилось на 1:
	n++;
	//7)Mission complete - значение добавлено :-)
	return arr;
}
int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
	return arr;
}

//Удавление элементов:
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}
int* pop_front(int* arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)	buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}

int** push_row_back(int** arr, int& m, const int n)
{
	//1) Создаем буферный массив:
	int** buffer = new int*[m + 1];
	//2) Копируем адреса существующих строк в новый массив указателей:
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	/*for (int i = 0; i < m + 1; i++)
	{
		buffer[i] = new int[n] {};
	}*/
	//2) Копируем значения в буферный массив:
	/*for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			buffer[i][j] = arr[i][j];
		}
	}*/
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	//4) Создаем последнюю строку массива:
	buffer[m] = new int[n] {};
	//5)Увеличиваем количество строк:
	m++;
	//6)Возвращаем адрес нового массива на место вызова:
	return buffer;
}

int** push_row_front(int** arr, int& m, const int n)
{
	//1)Создаем буферный массив указателей нужного размера:
	int** buffer = new int*[m + 1];
	//2)Копируем адреса строк в новый массив:
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	//3)Удаляем исходный массив указателей:
	delete[] arr;
	//4)Создаем нулевую строку массива:
	buffer[0] = new int[n] {};
	//5)Увеличиваем количество строк:
	m++;
	//6)Возвращаем новый массив:
	return buffer;
}

void push_col_back(int** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		//1)Создаем буферную строку:
		int* buffer = new int[n + 1]{};
		//2)Копируем исходную строку массива в буферную:
		for (int j = 0; j < n; j++)buffer[j] = arr[i][j];
		//3)Удаляем исходную строку:
		delete[] arr[i];
		//4)Подменяем адрес в массиве указателей на адрес новой строки:
		arr[i] = buffer;
	}
	n++;
}