#include <iostream>
using namespace std;

#define ELEVATOR
#define FACTORIAL

double factorial(int n);
void elevator(int level);
double degree(double N, double p);
int fib(int n);

int main()
{
	setlocale(LC_ALL, "rus");


	//              Степень числа
	int N;
	int p;
	cout << "Введите число,возводимое в степень : "; cin >> N;
	cout << "Введите степень : "; cin >> p;
	cout << "Степень числа " << N << " равна = " << degree(N, p) << endl;
	
	return 0;
}



void elevator(int level)
{
	if (level == 0)return;
	cout << level << endl;
	elevator(level - 1);
	cout << level << endl;
}



double factorial(int n)



{



	// return n==1 ? 1 : n*factorial(n-1);



	if (n == 1)return n;



	//double f=n*factorial(n-1);



	// cout << n << "! = " << f << endl;



	return n * factorial(n - 1);



}



double degree(double N, double p)
{
	if (p == 0)return 1;
	if (p == 1)return N;
	return N * degree(N, p - 1);
}