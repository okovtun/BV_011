#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	cout << 22 / 7 << endl;
	cout << 22 % 7. << endl;
#endif

	//const int a = 2*4;
	//cout << a << endl;
	//a = 3;
	//���������������
	//2+3*4-8/2;

	/*int a, b, c;
	a = b = c = 0;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;*/

	//Increment/Decrement (++/--)
	//Prefix, Postfix (Suffix)
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	int j = ++i;
	cout << j << endl;
	cout << i << endl;
}

/*
-------------------------------
Expression - ��� �������������� �����������,��������� ��
��������� � ����������.

������� - ��������� �������� ��� ����� ���������.
��������- ����� �������� ������ � ����� ����������.
���������-��������� �������� ��� ����� ����������. ?:

1. Arithmetical operators
	Unary:+ -;
	Binary:+ - * / % - ������� �� �������.

-------------------------------
*/