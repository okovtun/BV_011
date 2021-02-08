#include<iostream>
using namespace std;

void Exchange(int* a, int* b);

/*
----------------------------------
1. По значению - By value;
2. По указателю - By pointer;
3. По ссылке - By reference;
----------------------------------
*/

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(&a, &b);
	cout << a << "\t" << b << endl;
}

void Exchange(int* a, int* b)
{
	int buffer = *a;
	*a = *b; 
	*b = buffer;
	cout << a << "\t" << b << endl;
}