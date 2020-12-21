#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int t;
	cout << "Температура воздуха: "; 
	cin >> t;
	cout << endl;
	if (t > 0)
	{
		//cout << "Тепло" << endl;
		t=5;
	}
	else
	{
		//cout << "Холодно" << endl;
		t=-5;
	}
	cout << endl;
	//t > 0 ? 5 : -5;
}