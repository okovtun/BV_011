#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "Russian");

	double a, b, d; //  a и b - вводимые числа. d - результат
	char s; // знак перации
	cout << " \t\t\ КАЛЬКУЛЯТОР." << endl;
	cout << "\n";
	cout << " Введите выражение и нажмите Enter! ";
	cin >> a >> s >> b;

	if (s == '+')
	{
		d = a + b;
		cout << " Выражение" << " " << a << " + " << b << " = " << d << endl;
	}
	else if (s == '-')
	{
		d = a - b;
		cout << " Выражение" << " " << a << s << b << "=" << d << endl;
	}
	else if (s == '*')
	{
		d = a * b;
		cout << " Выражение" << " " << a << s << b << "=" << d << endl;
	}
	else if (s == '/')
	{
		d = a / b;
		cout << " Выражение" << " " << a << s << b << "=" << d << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}

	main();
}