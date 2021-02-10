#include<iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	cout << arr << endl;
	FillRand(arr, n);
	Print(arr, n);
	
	int value;	//Добавляемое значение
	cout << "Введите добавляемое значение: "; cin >> value;
	/*
	TODO: Алгоритм добавления элемента
	*/
	arr[n] = value;
	n++;
	Print(arr, n);

	/*int brr[5];
	cout << brr << endl;
	FillRand(brr, 5);
	Print(brr, 5);*/
	
	delete[] arr;
	//for (;;)new int[1000000];
	cout << "That's okay" << endl;
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
	for (int i = 0; i < n; i++)
	{
		//[] - оператор индексирования, возвращает значение по индексу
		cout << arr[i] << "\t";
	}
	cout << endl;
}