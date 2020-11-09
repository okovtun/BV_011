#include<iostream>
using namespace std;

//		type name[SIZE];
//identifier - это »ћя.

void main()
{
	setlocale(LC_ALL, "");
	//cout << int() << endl;
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	arr[4] = 123;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}