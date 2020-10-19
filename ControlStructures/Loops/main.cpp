#include<iostream>
#include<conio.h>	//Console Input/Output header
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define WHILE_BASICS
#define PALINDROME
//#define DO_WHILE_AND_GETCH

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_BASICS
	int i = 0;	//Счетчик цикла
	int n;	//Количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (n--)
	{
		cout << n << ".        Привет\n";
		//i++;
	}
	cout << n << endl;
#endif // WHILE_BASICS

#ifdef PALINDROME
	int number;	//Число, вводимое с клавиатуры.
	int reverse = 0;//Число, записанное задомнаперед.
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
#endif // PALINDROME

#ifdef DO_WHILE_AND_GETCH
	char key;	//Будет хранить код клавиши
	do
	{
		key = _getch();//ASCII-код нажатой клавиши.
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // DO_WHILE_AND_GETCH

}