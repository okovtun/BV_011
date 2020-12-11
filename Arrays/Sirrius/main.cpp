#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int A[n][n] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	cout << "�������� �������:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	//������� ����������� �������:
	int B[n][n * 2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	cout << "����������� �������:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	//////////////////////////////////////////////////////
	//	��������� ������������ ������� ������� �������:
	//////////////////////////////////////////////////////
	
	//������� ������� ��������:
	int sum_main_diag = 0;	//����� ������������ ������� ����������
	int my_multiply;			//������������ ��������� ���������
	for (int i = 0; i < n; i++)
	{
		my_multiply = 1;
		for (int j = 0; j < n; j++)
		{
			my_multiply *= B[j][j + i];;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
		}
		sum_main_diag += my_multiply;
	}
	cout << "����� ������������ ��������� ������� ���������: " << sum_main_diag << endl;
	
	//������� ��������������� ���������:
	int sum_aux_diag = 0;
	for (int i = 0; i < n; i++)
	{
		my_multiply = 1;
		for (int j = 0; j < n; j++)
		{
			my_multiply *= B[n - 1 - j][j + i];
		}
		sum_aux_diag += my_multiply;
	}
	cout << "����� ������������ ��������� ��������������� ���������: " << sum_aux_diag << endl;
	int determinant = sum_main_diag - sum_aux_diag;
	cout << "������������ �������: " << determinant << endl;
}