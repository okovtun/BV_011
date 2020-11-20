#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n];

	//////////////////////////////////////// FillRand //////////////////////////////////////////////////

	//srand(time(NULL));
	int minRand = 100;
	int maxRand = 100;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	} while (minRand == maxRand);
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
	///////////////////////////////////////////////////////////////////////////////////
	cout << "�������� ������:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	/////////////////////////////////////// ���������� ////////////////////////////////////////////

	for (int i = 0; i < n; i++)	
	{
		//������� 'i' �������� �������, � ������� ����� ��������� ����������� �������� 
		//�� ������� ��������.
		for (int j = i + 1; j < n; j++)
		{
			//������� 'j' ���������� ��������.
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	cout << "��������������� ������:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}