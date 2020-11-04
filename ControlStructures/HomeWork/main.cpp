#include <iostream>
using namespace std;
#define Checkmate


void main()
{
	setlocale(LC_ALL, "");
	int n = 5;

	cout << " ________________" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "|";
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
				{
					cout << "+ ";
				}
				else cout << "- ";
			}
			cout << "|";

		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)	cout << "- ";
				else cout << "+ ";
			}
			cout << "|";
		}
		cout << endl;

	}
	cout << " ________________";
}