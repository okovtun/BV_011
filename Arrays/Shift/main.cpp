#include<iostream>
using namespace std;

//	1	2	3	4	5	6	7	8	9	10
//	2	3	4	5	6	7	8	9	10	1
//	3	4	5	6	7	8	9	10	1	2
//	4	5	6	7	8	9	10	1	2	3

void main()
{
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	int c = b;
	b = a;
	a = c;
	cout << a << "\t" << b << endl;
	////////////////////////////////////////////////////
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//cout << sizeof(arr) << endl;
	//Выводим на экран исходный массив:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shifts;

	/////////////////////////////////////////////////////////
	////////////		Циклический сдвиг		/////////////

	for (int i = 0; i < number_of_shifts; i++)
	{
		/*int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;*/

		for (int i = 0; i < n; i++)
		{
			int buffer = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = arr[i];
		}
	}

	/////////////////////////////////////////////////////////

	//Выводим на экран сдвинутый массив:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	/////////////////////////////////////////////////////////
}