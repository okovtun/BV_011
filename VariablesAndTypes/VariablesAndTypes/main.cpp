#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << false << "\n";
	
	/*cout << (bool)0.0001 << endl;
	bool summer = false;
	int temperature;
	cin >> temperature;
	cout << (temperature > 20) << endl;*/

	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << 0 << "\t" << USHRT_MAX << endl;
}
	//���������� � ���� ������
	//���������� (Variable) - ��� ����������� ������� ������, 
	//���������� ������� ����� ���������� � �������� ���������� ���������.

	//			type name;		//��������� ���������� ����������
	//type - ��� ����������. �� ����������

/*
----------------------------------------

1. ���������� ����: bool (Boolean) 1 Byte
	true - 1
	false- 0
	0 - ��� false, a true - ��� ��� ��� �� ����!!!

2. ���������� ����: char (Character - ������) 1 Byte ASCII 256

3. �������� ����.
	unsigned
	  signed
--------------------
	short	2B
	long	4B
	int		2-4B
	long long	8B



----------------------------------------
*/