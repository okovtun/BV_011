#include <iostream>
using namespace std;

int** Allocated(const int m, const int n);
void Clear(int** arr, const int m);

void FillRand(int* arr, const int n);
void FillRand(int** arr, const int m, const int n);

void Print(int arr[], const int n);
void Print(int** arr, const int m, const int n);

void Push_back(int* &arr, int &n, int value);
void Push_Front(int* &arr, int &n, int value);

void Insert(int* &arr, int &n, int index, int value);
void Pop_back(int* &arr, int &n);
void Pop_front(int* &arr, int &n);
void Erase(int* &arr, int &n, int index);

//Функция добавления строки в конец массива
int** push_row_back(int** arr, int& m, const int n);
int** push_row_front(int** arr, int& m, const int n);

void push_col_back(int** arr, int m, int &n);

//#define DYNAMIC_MEMORY_1
#define tab "/t"
int main()
{
	setlocale(LC_ALL, "");

	int m; //stroki
	int n; // stolbci
	cout << "Введите количество строк   "; cin >> m;
	cout << "Введите количество столбцов    "; cin >> n;
	int** arr = Allocated(m, n);
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "Memory allocated" << endl;
	// cout << "Добавляем строку в конец массива :" << endl;

	arr = push_row_back(arr, m, n);
	cout << "Строка добавлена" << endl;
	Print(arr, m, n);
	cout << " Добавляем строку" << endl;
	arr = push_row_front(arr, m, n);

	Print(arr, m, n);
	cout << "Добавляем столбец в конце массива :" << endl;
	push_col_back(arr, m, n);
	Print(arr, m, n);

	Clear(arr, m);
#ifdef DYNAMIC_MEMORY_1
	// int n; // добавляемые значения
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	int s_arr[5];
	//    cout << sizeof(arr)<< endl;
	//    cout << sizeof(s_arr)<< endl;
	int value;
	int index;
	cout << "Введите добавляемое значение : "; cin >> value;
	Push_back(arr, n, value);
	FillRand(arr, n);
	Print(arr, n);
	Push_Front(arr, n, value);
	Print(arr, n);
	Insert(arr, n, index, value);
	Print(arr, n);
	Pop_back(arr, n);
	Print(arr, n);
	Pop_front(arr, n);
	Print(arr, n);
	Erase(arr, n, index);
	Print(arr, n);
#endif //DYNAMIC_MEMORY_1  delete [] arr;
	return 0;
}
int** Allocated(const int m, const int n)
{
	// 1 создаем массив указателей
	int** arr = new int*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	return arr;
}
void Clear(int** arr, const int m)
{
	//1) Удаляем строки двумерного массива:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;    // * - возвращает значение по адресу
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
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";   // оператор индексирования [] возвращает значение по индексу
	}
	cout << endl;
}
void Print(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Push_back(int* &arr, int &n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//    cout << typeid(arr).name()<< endl;
	arr[n] = value;
	delete[] arr;
	arr = buffer;
	n++;
}

int** push_row_back(int** arr, int& m, const int n)
{
	//Создаем буферный массив
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}

	// Удаляем массив указателей
	delete[]arr;
	//  Создаем последнюю строку массива
	buffer[m] = new int [n] {};
	m++;
	return buffer;
}
int** push_row_front(int** arr, int& m, const int n)
{
	int** buffer = new int*[m + 1];
	for (int i = 0; i < m; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//Удаляем исходный массив указателей
	delete[]arr;
	buffer[0] = new int [n] {};
	m++;
	return buffer;
}

void push_col_back(int** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		// создаем буфферную строку
		int* buffer = new int[n + 1]{};
		//копируем исходную строку массива в буфферную
		for (int j = 0; j < n; j++)
		{
			buffer[j] = arr[i][j];
		}
		delete[]arr[i];
		//подменяем адресв массиве указателей на адрес новой строки
		arr[i] = buffer;
	}
	n++;
}

void Push_Front(int* &arr, int &n, int value)
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
}
void Insert(int* &arr, int &n, int index, int value)
{
	if (index >= 0 && index < n)
	{

		int* buffer = new int[n + 1];
		buffer[index] = value;
		for (int i = 0; i < n; i++)
		{
			buffer[i + 1] = arr[i];
		}
		delete[] arr;
		arr = buffer;

	}
	if (index<0 || index>n)
	{
		cout << "Введите номер элемента массива от 0 до " << n << endl;
	}
}
void Pop_back(int* &arr, int &n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
void Pop_front(int* &arr, int &n)
{
	int* buffer = new int[n--];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
}
void Erase(int* &arr, int &n, int index)
{
	cout << "Введите индекс элемента массива: " << endl;
	cin >> index;
	if (index >= 0 && index < n)
	{
		int* buffer = new int[n - 1];
		for (int i = 0; i < index; i++)
		{
			buffer[i] = arr[i];
		}
		for (int i = index; i < n; i++)
		{
			buffer[i + 1] = arr[i + 1];
		}
		delete[] arr;
		arr = buffer;
		n--;
	}
}