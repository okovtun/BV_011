#include <iostream>
#include <conio.h>
#include<Windows.h>

using namespace std;

//#define FACTORIAL
#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	double factorial = 1; // �������� ���������� ����� 1, ������� �������� 0 � ���������� ������ ��������� 0.
	int n; // �������� �����
	cout << " \t\ ������� ����� ��� ����������� ��� ����������: "; cin >> n;

	for (int i = 1; i <= n; ++i) // ��������� �� ��� �������� �������� �����.
	{
		cout << i << "! = ";
		factorial = factorial * i;
		cout << factorial << endl;
	}
	cout << " \t\ ��������� ����� " << n << " = " << factorial << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//��������� �������
	int n;	//���������� �������
	double N = 1;	//C������
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	//cout << a << " ^ " << n << " = ";
	cout << N << endl;
#endif

#ifdef ASCII
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


	for (int i = 0; i < 256; ++i)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";

		// �� 16 �������� � ������ ����-�� �� ����������. �� � ���� �����.
}
#endif // ASCII

}