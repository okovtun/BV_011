#include<iostream>
using namespace std;

//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
#ifdef DEC_2_BIN
	const int n = 32;	//Разрядность двоичного числа
	bool bin[n] = {};	//Двоичное число
	int i = 0;
	/*while (decimal)
	{
		bin[i++] = decimal % 2;
		decimal /= 2;
	}*/
	for (; decimal; decimal /= 2)
	{
		bin[i++] = decimal % 2;
	}

	for (--i; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
	/*for (; i--;)
	{
		cout << "Privet!";
	}*/
#endif // DEC_2_BIN

#ifdef DEC_2_HEX
	const int n = 8;	//Максимально возможная разрядность Шестнадцатеричного числа
	int hex[n] = {};
	int i = 0;
	while (decimal)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	i--;
#endif // DEC_2_HEX
	//for (int i = 0; i < 100; i++)cout << i << "\t" << (char)i << endl;
	char digit[] = "0123456789ABCDEF";
	for (; i >= 0; i--)
	{
		/*i
f (hex[i] == 10)
			cout << "A";
		else if (hex[i] == 11)
			cout << "B";
		else if (hex[i] == 12)
			cout << "C";
		else if (hex[i] == 13)
			cout << "D";
		else if (hex[i] == 14)
			cout << "E";
		else if (hex[i] == 15)
			cout << "F";
		else
			cout << hex[i];*/
			/*switch (hex[i])
			{
			case 10:cout << 'A'; break;
			case 11:cout << 'B'; break;
			case 12:cout << 'C'; break;
			case 13:cout << 'D'; break;
			case 14:cout << 'E'; break;
			case 15:cout << 'F'; break;
			default:cout << hex[i];
			}*/
			//cout << hex[i];
			/*if (hex[i] < 10)cout << hex[i];
			else cout << char(hex[i] + 55);*/
		//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
		//cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
		cout << digit[hex[i]];
	}
	cout << endl;
}

/*
---------------------------------------
I			 1
II			 2
III			 3
IV			 4
V			 5

XII			12
---------------------------------------
	5348
	  24
---------------------------------------
*/