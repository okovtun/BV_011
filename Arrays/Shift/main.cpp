#include<iostream>
using namespace std;

//	1	2	3	4	5	6	7	8	9	10
//	2	3	4	5	6	7	8	9	10	1
//	3	4	5	6	7	8	9	10	1	2
//	4	5	6	7	8	9	10	1	2	3

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//cout << sizeof(arr) << endl;
	//������� �� ����� �������� ������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shifts;
	cout << "�� ������� ��������� �������� ������: "; cin >> number_of_shifts;
	
	/////////////////////////////////////////////////////////
	////////////		����������� �����		/////////////

	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;

	/////////////////////////////////////////////////////////

	//������� �� ����� ��������� ������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}