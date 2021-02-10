#include<iostream>
using namespace std;

//Ссылка(Reference) - это переменная,
//которая содержит адрес другой переменной.

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int& ra = a;	//reference to 'a' - ссылка на 'a'
	//& - показывает, что объявляемая переменная - это ссылка.
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
}