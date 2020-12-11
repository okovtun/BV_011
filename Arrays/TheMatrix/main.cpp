#include<iostream>
using namespace std;

#define delimiter "\n-----------------------------------------------------------------\n"

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
	//Умножение матриц:
	int D[m][n]{};
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				D[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	/////////////////////////////////////////////////////////////////////////////
	//Выводим матрицы на экран:
	/*for (int i = 0; i < m; i++)
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
	cout << endl;*/

	cout << "Сложение матриц:\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\t|";
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\t +\t";
		cout << "|";
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\t =\t";
		cout << "|";
		for (int j = 0; j < n; j++)
		{
			cout << C[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\n";
	}
	cout << delimiter;
	cout << "Умножение матриц:\n";
	for (int i = 0; i < m; i++)
	{
		cout << "\t|";
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\t *\t";
		cout << "|";
		for (int j = 0; j < n; j++)
		{
			cout << B[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\t =\t";
		cout << "|";
		for (int j = 0; j < n; j++)
		{
			cout << D[i][j];
			if (j != n - 1) cout << "\t";
		}
		cout << "|\n";
	}
}