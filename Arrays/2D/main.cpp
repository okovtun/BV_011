#include<iostream>
using namespace std;

#define delimiter "\n======================================================\n"
#define PAGE(i) "\n--------------- PAGE " << i << " ----------------------\n"

#define _2D
//#define _3D

void main()
{
	setlocale(LC_ALL, "");
#ifdef _2D
	const int ROWS = 5;	//���������� �����
	const int COLS = 8;	//���������� �������� - ���������� ��������� ������
	int arr[ROWS][COLS] =
	{
		{},
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	/*for (int i = 0; i < ROWS; i++)
	{
		arr[i][i] = 111;
	}*/

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand()%100+50;
		}
	}

	for (int i = 0; i < ROWS; i++)	//������� 'i' �������� ������
	{
		for (int j = 0; j < COLS; j++)	//������� 'j' �������� �������� ������
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� ��������������:  " << (double)sum / (ROWS*COLS) << endl;

	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;

#endif // _2D

#ifdef _3D
	const int PAGES = 5;
	const int ROWS = 5;
	const int COLS = 5;
	int arr[PAGES][ROWS][COLS] =
	{
		{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		},
		{
			{11, 22, 33},
			{44, 55, 66},
			{77, 88, 99}
		},
		{
			{111, 222, 333},
			{444, 555, 666},
			{777, 888, 999}
		}
	};
	for (int i = 0; i < PAGES; i++)
	{
		//cout << "\n--------------- PAGE " << i << " ----------------------\n";
		cout << PAGE(i);
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				cout << arr[i][j][k] << "\t";
			}
			cout << endl;
		}
	}

	cout << delimiter << endl;
	for (int i = 0; i < PAGES*ROWS*COLS; i++)
	{
		if (i % (ROWS*COLS) == 0)cout << PAGE(i / (ROWS*COLS));
		if (i % (COLS) == 0)cout << endl;
		cout << arr[0][0][i] << "\t";
	}
	cout << endl;
#endif // _3D

}