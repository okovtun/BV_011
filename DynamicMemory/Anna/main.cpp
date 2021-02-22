//
//  main.cpp
//  EvenOdd
//
//  Created by ���� �������� on 15.02.2021.
//

#include <iostream>
#include <ctime>
using namespace std;

void Print(int arr[], const int n);

int main()
{
	const int n = 10;
	int arr[n];
	int buffer_even = 0;	//���������� ������ ���������
	int buffer_odd = 0;		//���������� �������� ���������
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] % 2)
		{
			buffer_even++;
		}
		else
		{
			buffer_odd++;
		}
	}
	cout << " ���������� ������ ���������: " << buffer_even << endl;
	cout << "���������� �������� ���������: " << buffer_odd << endl;
	int* even_arr = new int[buffer_even];
	int* odd_arr = new int[buffer_odd];
	/*buffer_even = 0;
	buffer_odd = 0;*/
	for (int i = 0, j = 0, k = 0; i < 10; i++)
	{
		/*if (arr[i] % 2)
		{
			even_arr[j++] = arr[i];
		}
		else
		{
			odd_arr[k++] = arr[i];
		}*/
		(arr[i] % 2 ? even_arr[j++] : odd_arr[k++]) = arr[i];
	}
	Print(arr, n);
	Print(even_arr, buffer_even);
	Print(odd_arr, buffer_odd);
	return 0;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
