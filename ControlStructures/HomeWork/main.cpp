#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");

	double a, b, d; //  a � b - �������� �����. d - ���������
	char s; // ���� �������
	cout << " \t\t\ �����������." << endl;
	cout << "\n";
	cout << " ������� ��������� � ������� Enter! ";
	cin >> a >> s >> b;

	if (s == '+')
	{
		d = a + b;
		cout << " ���������" << " " << a << " + " << b << " = " << d << endl;
	}
	else if (s == '-')
	{
		d = a - b;
		cout << " ���������" << " " << a << s << b << "=" << d << endl;
	}
	else if (s == '*')
	{
		d = a * b;
		cout << " ���������" << " " << a << s << b << "=" << d << endl;
	}
	else if (s == '/')
	{
		d = a / b;
		cout << " ���������" << " " << a << s << b << "=" << d << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}

	main();
}