#include<iostream>
#include<Windows.h>
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}

	/*const int HOURS = 12;
	const int MINUTES = 60;
	const int SECONDS = 60;
	for (int hour = 0; hour < HOURS; hour++)
	{
		for (int minute = 0; minute < MINUTES; minute++)
		{
			for (int second = 0; second < SECONDS; second++)
			{
				Sleep(100);
				system("CLS");
				cout << hour << ":" << minute << ":" << second << endl;
			}
		}
	}*/
}
