#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS
//#define INCREMENT_DECREMENT
//#define HOME_WORK
#define COMPOUND_ASSIGNMENTS	//составные присваивани€

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	cout << 22 / 7 << endl;
	cout << 22 % 7. << endl;
#endif

#ifdef INCREMENT_DECREMENT
	//const int a = 2*4;
//cout << a << endl;
//a = 3;
//јссоциативность
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
#endif // INCREMENT_DECREMENT

#ifdef HOME_WORK
	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl;
#endif

	//int a = 2;
	//a = a + 3;
	//a += 3;	//ќператор ѕ–»Ѕј¬»“№
	//a -= 4;	//ќператор ќ“Ќя“№
	//*=
	//	/=
	//	%0

	/*bool is_it_summer = false;
	2 > 5;
	2 == 5;
	5 > 5;*/
	//cout << (!true == false) << std::endl;
	cout << (false && true && true) << endl;
}

/*
-------------------------------
Expression - это синтаксическа€ конструкци€,состо€ща€ из
операндов и операторов.

”нарные - выполн€ют действие над одним операндом.
Ѕинарные- могут работать только с двум€ операндами.
“ернарные-выполн€ют действие над трем€ операндами. ?:

1. Arithmetical operators
	Unary:+ -;
	Binary:+ - * / % - остаток от делени€.

-------------------------------
*/