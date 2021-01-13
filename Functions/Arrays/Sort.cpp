#include"Functions.h"

void Sort(int arr[], const int n)
{
	//���������� ����������� �������:
	for (int i = 0; i < n; i++)	//�������� �������, � ������� ����� ��������� ����������� ��������
	{
		for (int j = i + 1; j < n; j++)	//���������� ��������, � ������� ������������ ��������
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	//����������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int m, const int n)
{
#ifdef DEBUG
	int iterations = 0;
	int exchanges = 0;
#endif // DEBUG

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				/*for (;;)
				{

				}*/

				int l;
				if (k == i)l = j + 1;
				else l = 0;

				//			condition ? value1 : value2;
				for (/*int l = (k == i) ? j + 1 : 0*/; l < n; l++)
				{
#ifdef DEBUG
					iterations++;
#endif // DEBUG
					if (/*������������ ������*/arr[k][l] < arr[i][j]/*��������� ������*/)
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
#ifdef DEBUG
						exchanges++;
#endif // DEBUG
					}
				}
			}
		}
	}
#ifdef DEBUG
	cout << "������ ������������ �� " << iterations << " ��������\n";
	cout << "��� ����, ���� ��������� " << exchanges << " ������� ���������\n";
#endif // DEBUG
}