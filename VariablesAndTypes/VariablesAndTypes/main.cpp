#include<iostream>
using namespace std;

//#define NAMING_AND_INIT
//#define INPUT
#define CONSTANTS

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << false << "\n";

	/*cout << (bool)0.0001 << endl;
	bool summer = false;
	int temperature;
	cin >> temperature;
	cout << (temperature > 20) << endl;*/

	/*cout << sizeof(short) << endl;
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	cout << 0 << "\t" << USHRT_MAX << endl;*/

	/*cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;
	cout << UINT_MAX << endl;*/

	/*short int a;
	long int b;
	int c;
	cout << sizeof(long long int) << endl;
	cout << ULLONG_MAX << endl;*/

#ifdef NAMING_AND_INIT
	cout << "float:" << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;

	double Weight;
	//cout << Weight << endl;
	double price_of_coffee;	//	snake_case_style
	double camelCaseStyle;
	double BigCamel;
	double smallCamel;

	double ���������_����;
	int a = 0;	//��� ���������� �������� ���������

	cout << "������� ��������� ����� ����: ";	cin >> price_of_coffee;
	cout << price_of_coffee << endl;
	cout << a << endl;
#endif // NAMING_AND_INIT

	//������������������
	//������������� - ���������� ���������� ��������.
	//Init - ������.


#ifdef INPUT
	double price_of_coffee;
	int number_of_cups;
	cout << "������� ��������� ����� ����: "; cin >> price_of_coffee;
	cout << "������� ���������� �����: "; cin >> number_of_cups;
	int total_price = price_of_coffee * number_of_cups;
	cout << "� ���: " << total_price << "$\n";
#endif // 


#if defined CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;

#endif















	
}
//���������� � ���� ������
//���������� (Variable) - ��� ����������� ������� ������, 
//���������� ������� ����� ���������� � �������� ���������� ���������.

//			type name;		//��������� ���������� ����������
//type - ��� ����������. �� ����������

/*
----------------------------------------

1. ���������� ����: bool (Boolean) 1 Byte
	true - 1
	false- 0
	0 - ��� false, a true - ��� ��� ��� �� ����!!!

2. ���������� ����: char (Character - ������) 1 Byte ASCII 256

3. �������� ����.
	unsigned
	  signed
--------------------
	short	2B
	long	4B
	int		2-4B
	long long	8B



----------------------------------------
*/