#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"
template<typename T>void Print(T arr[], const int n)
{
	//cout << "Размер массива: " << sizeof(arr) << endl;
	for (int i = 0; i < n; i++)
	{
		//[] - оператор индексирования, возвращает значение по индексу
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int m, const int n)
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
