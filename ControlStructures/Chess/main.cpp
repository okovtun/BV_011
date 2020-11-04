//Chess
#include<iostream>
using namespace std;

#define UP_LEFT_CORNER		(char)218
#define UP_RIGHT_CORNER		(char)191
#define DOWN_LEFT_CORNER	(char)192
#define DOWN_RIGHT_CORNER	(char)217
#define HORIZ_LINE			(char)196
#define VERT_LINE			(char)179

void main()
{
	setlocale(LC_ALL, "Russian");
	/*for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << " - " << (char)i << " \n";
	}*/
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)	//—четчик 'i' нумерует строки.
	{
		for (int j = 0; j <= n; j++)	//—четчик 'j' нумерует позицию в строке (столбик)
		{
			if (i == 0 && j == 0)cout << UP_LEFT_CORNER;
			else if (i == 0 && j == n)cout << UP_RIGHT_CORNER;
			else if (i == n && j == 0)cout << DOWN_LEFT_CORNER;
			else if (i == n && j == n)cout << DOWN_RIGHT_CORNER;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else cout << "  ";
		}
		cout << endl;
	}
}