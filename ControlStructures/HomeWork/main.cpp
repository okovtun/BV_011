#include<iostream>
#define UP_LEFT_CORNER    (char)218
#define UP_RIGHT_CORNER   (char)191
#define DOWN_LEFT_CORNER  (char)192
#define DOWN_RIGHT_CORNER (char)217
#define HORIS_LINE        (char)196
#define VERT_LINE         (char)179
#define Kvadrat           (char)219
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите размер фигуры:"; cin >> n; n++;
	setlocale(LC_ALL, "C");

	for (int i = 0; i <= n; i++) //—четчик i нумирует строки.
	{
		for (int j = 0; j <= n; j++) //—четчик J нумирует позицию в строке (столбик)
		{
			if (i == 0 && j == 0)cout << UP_LEFT_CORNER;
			else  if (i == 0 && j == n)cout << UP_RIGHT_CORNER;
			else  if (i == n && j == 0)cout << DOWN_LEFT_CORNER;
			else  if (i == n && j == n)cout << DOWN_RIGHT_CORNER;
			else  if (i == 0 || i == n)cout << HORIS_LINE << HORIS_LINE;
			else  if (j == 0 || j == n)cout << VERT_LINE;
			else
			{
				if ((i + j) % 2 == 0)
				{
					cout << Kvadrat << Kvadrat;
				}
				else
				{
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
}

















