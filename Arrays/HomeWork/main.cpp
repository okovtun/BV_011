//
//  main.cpp
//  IZ10V2
//
//  Created by ���� �������� on 30.11.2020.
//

#include <iostream>
using namespace std;
//���� � ������������� �������...�� ������� ����� ����� ������� ��� �������?���� �������� ���������� ����� (((;
int main()
{
	const int n = 32;
	int arr[n], x;
	cout << "������� ���������� ����� ��� �������� � �������� �������: "; cin >> x;
	for (int i = 0; i < n; i++)
	{
		arr[i] = x % 2;
		x /= 2;
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
