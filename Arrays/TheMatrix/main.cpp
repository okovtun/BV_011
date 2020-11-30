#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;	//КОЛИЧЕСТВО строк
	const int n = 3;	//КОЛИЧЕСТВО столбцов
	int A[m][n];
	int B[m][n];
	//Заполняем матрицы сдучайными числами:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	/////////////////////////////////////////////////////////////////////////////
	//Сложение матриц
	int C[m][n];
	for (int i = 0; i < m; i++)	//i - это НОМЕР строки
	{
		for (int j = 0; j < n; j++)	//j - это НОМЕР столбца
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	/////////////////////////////////////////////////////////////////////////////
	//Выводим матрицы на экран:
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}