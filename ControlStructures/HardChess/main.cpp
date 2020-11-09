#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведте размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)// оличество больших клеток
	{
		for (int j = 0; j < n; j++)// оличество строк из звездочек в большой клетке
		{
			for (int k = 0; k < n; k++)//—читает большие клетки по горизонтали
			{
				for (int l = 0; l < n; l++)	// оличество звездочек в большой клетке, по горизонтали
				{
					if((i+k)%2==0)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
}