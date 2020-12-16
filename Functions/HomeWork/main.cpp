//
//  main.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 14.12.2020.
//

#include <iostream>
using namespace std;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValue(int arr[], const int n);
double minValue(double arr[], const int n);
int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);

#define delimeter "\n-----------------------------------------------------\n"

int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	const int m = 8;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << delimeter;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;;
	cout << delimeter;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;;
	cout << delimeter;
	cout << "Минимальное значение в массиве: " << minValue(arr, n) << endl;;
	cout << delimeter;
	cout << "Минимальное значение в массиве: " << maxValue(arr, n);
	cout << delimeter;

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	cout << delimeter;
	Sum(brr, n);
	cout << delimeter;
	Avg(brr, n);
	cout << delimeter;
	minValue(arr, n);
	cout << delimeter;
	maxValue(arr, n);
	cout << delimeter;
	int crr[m];
	FillRand(crr, m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);
	cout << delimeter;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	double avg = 0;
	avg = double(Sum(arr, n)) / n;
	return avg;
}
double Avg(double arr[], const int n)
{
	return (Sum(arr, n)) / n;
}
int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}
int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
