#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
#define homework_task_1
#define homework_task_2
#define homework_task_3
void main()
{
	setlocale(LC_ALL, "");
#ifdef homework_task_1
	unsigned int numb;
	unsigned long fact = 1;
	cout << "������ 1. ���������� ��������� �����\n" << "������� ����� �����: ";
	cin >> numb;
	for (int i = numb; i > 0; i--)
		fact *= i;
	cout << "��������� ����� �����: " << fact << endl;
	/* 1. ��������� ���� for, �������� ���������, ������� ��������� ��������� �����, ���������� � ����������;*/
#endif
#ifdef homework_task_2
	int x, n, b;
	cout << "������ 2. ���������� � ������� �����\n";
	cout << "Enter the number: "; cin >> x; cout << "\n";
	cout << "Enter the power: ";  cin >> n; cout << "\n";
	b = x;
	for (int i = 1; i < n; i++) {
		b = b * x;
	}
	cout << "The result is: " << b << endl;
	/* 2. �������� ���� for �������� ��������� �����, � ��������� �������;*/
#endif
#ifdef homework_task_3
	int numb2;
	cout << "������ 3.\t������� ASCII (American Standart Code Information Interchange)" << endl;
	for (int i = 1; i < 256; i++)
	{
		cout << (char)i << setw(5);
	}
	cout << endl;
	/*3. ������� �� ����� ������� ASCII - ��������, ����������� ���������, �� 16 �������� � ������.*/
#endif	
}

