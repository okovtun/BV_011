#include<iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Russian");

	/* ������ 1.
	�������� ���������, ������� ����������� ��������� � ���������� �������
	����� � �������� ������.
	��������, ����� 12,5 ������ ���� ������������� � ���� 12 ���. 50 ���.
	�������������� ����� � �������� ������.
	������� ������� ����� -> 23.6
	23.6 ���. � ��� 23 ���. 60 ���.*/

	float money; //���������� ��������� �������� �����

	cout << "������� ����� ������� �����: "; cin >> money;
	money += .00001;
	int rubl = money;
	int copeika = (money - rubl+.00001) * 100;
	//cout << typeid(money).name() << endl;
	cout << money << " - ��� " << rubl << " ���." << copeika << " ���.\n";
	cout << (int)money << " ���.\t\t" << int((money - (int)money) * 100) << " ���.\n";
}