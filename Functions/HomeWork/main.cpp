//
//  main.cpp
//  Arrays Function
//
//  Created by Анна Горячева on 14.12.2020.
//

#include <iostream>
using namespace std;
const int ROWS = 8;
const int COLS = 10;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);

void Print(double arr[], const int n);
void Print(int arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int m, const int n);

int Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int m, const int n);

int minValue(int arr[], const int n);
double minValue(double arr[], const int n);
int minValue(int arr[ROWS][COLS], const int m, const int n);

int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);
int maxValue(int arr[ROWS][COLS], const int m, const int n);
#define delimeter "\n-----------------------------------------------------\n"
int main()
{
	const int n = 10;
	const int m = 8;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValue(arr, n);
	maxValue(arr, n);

	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	Sort(brr, n);
	Print(brr, n);
	Sum(brr, n);
	Avg(brr, n);
	minValue(arr, n);
	maxValue(arr, n);
	cout << delimeter;

	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	Sum(i_arr2, ROWS, COLS);
	cout << delimeter;
	cout << minValue(i_arr2, ROWS, COLS);
	cout << delimeter;
	cout << maxValue(i_arr2, ROWS, COLS);
	cout << delimeter;
	cout << Avg(i_arr2, ROWS, COLS);
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
void FillRand(int arr[ROWS][COLS], const int m, const int n)
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
void Print(int arr[ROWS][COLS], const int m, const int n)
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
int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int Avg(int arr[], const int n)
{
	int avg = 0;
	avg = (Sum(arr, n)) / n;
	return avg;
}
double Avg(double arr[], const int n)
{
	double avg = 0;
	avg = (Sum(arr, n)) / n;
	return avg;
}
double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return double(Sum(arr, ROWS, COLS)) / (m*n);
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
int minValue(int arr[ROWS][COLS], const int m, const int n)
{
	int minRows = 0, minCols = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < arr[minRows][minCols])
			{
				minRows = i;
				minCols = j;
			}
		}
	}
	return arr[minRows][minCols];
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
int maxValue(int arr[ROWS][COLS], const int m, const int n)
{
	int maxRows = 0, maxCols = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] > arr[maxRows][maxCols])
			{
				maxRows = i;
				maxCols = j;
			}
		}
	}
	return arr[maxRows][maxCols];
}
