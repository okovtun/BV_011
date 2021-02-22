#include<iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int arr[], const int n);

//Добавление элементов
int* push_back(int arr[], int& n, int value);
int* push_front(int arr[], int& n, int value);

//Удавление элементов:
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);

#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
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
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)	buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}