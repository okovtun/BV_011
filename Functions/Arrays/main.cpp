#include"Functions.h"
#include"Functions.cpp"

#define delimiter "\n---------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 13;
	int i_arr[n];
	FillRand(i_arr, n);
	Print(i_arr, n);
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "����� ��������� �������: " << Sum(i_arr, n) << endl;
	cout << "������� ��������������: " << Avg(i_arr, n) << endl;
	cout << delimiter << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////

	double d_arr[n];
	FillRand(d_arr, n);
	Print(d_arr, n);
	Sort(d_arr, n);
	Print(d_arr, n);
	cout << "����� ��������� �������: " << Sum(d_arr, n) << endl;
	cout << "������� ��������������: " << Avg(d_arr, n) << endl;
	cout << delimiter << endl;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/*const int m = 8;
	int crr[m];
	FillRand(crr,m);
	Print(crr, m);
	Sort(crr, m);
	Print(crr, m);*/


	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "��������������� ������: " << endl;
	Sort(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);

}