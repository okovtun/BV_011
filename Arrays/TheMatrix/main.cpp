#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int m = 3;	//���������� �����
	const int n = 3;	//���������� ��������
	int A[m][n];
	int B[m][n];
	//��������� ������� ���������� �������:
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
	//�������� ������
	int C[m][n];
	for (int i = 0; i < m; i++)	//i - ��� ����� ������
	{
		for (int j = 0; j < n; j++)	//j - ��� ����� �������
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	/////////////////////////////////////////////////////////////////////////////
	//������� ������� �� �����:
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