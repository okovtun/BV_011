#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define CHAIN
//#define TEST

//#define SWITCH_SYNTAX

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef CHAIN
	int temperature;
	cout << "������� �����������: "; cin >> temperature;

	if (temperature > 70)  cout << "�� �� ������ �������!" << endl;
	else if (temperature > 50)	cout << "�� � �������" << endl;
	else if (temperature > 35)	cout << "������ ����" << endl;
	else if (temperature > 25)	cout << "�����" << endl;
	else if (temperature > 10)	cout << "�����" << endl;
	else if (temperature > 0)	cout << "���������" << endl;
	else	cout << "����" << endl;
#endif // CHAIN
	
	/*int n;
	cout << "������� �����: "; cin >> n;
	if (n >= 0 && n <= 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� Firefox" << endl;
	}*/

#ifdef TEST
	int counter = 0;	//������� ���������� �������
	char answer;		//����� �����������

	cout << "������ 1:\n";
	cout << "�� ����� ������� �� �����?\n";
	cout << "A - ��������;\n";
	cout << "B - ������;\n";
	cout << "C - �����;\n";
	cout << "D - ����;\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		system("color 0A");
		cout << "�����" << endl;
		counter++;
	}
	else
	{
		system("color 0C");
		cout << "����� ��������" << endl;
	}

	system("PAUSE");
	system("color 07");
	system("CLS");
	cout << "������ 2:\n";
	cout << "�� ����� ����������� �� �����?\n";
	cout << "A - ������;\n";
	cout << "B - ����;\n";
	cout << "C - ������;\n";
	cout << "D - ��������;\n";
	cout << "��� �����: "; cin >> answer;
	if (answer == 'D' || answer == 'd')
	{
		system("color 0A");
		cout << "�����" << endl;
		counter++;
	}
	else
	{
		system("color 0C");
		cout << "����� ��������" << endl;
	}

	cout << "�� ��������� ������ ���� ������������, � ������� " << counter << " �����\n";
#endif // TEST

	double a, b, c;	//�����, �������� � ����������
	char s;		//Sign - ���� ��������
	cout << "������� ���������: ";
	//cin.ignore();
	/*cin.clear();
	cin.ignore(32767, '\n');*/
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': c = a + b;  break;
	case '-': c = a - b;  break;
	case '*': c = a * b;  break;
	case '/': c = a / b;  break;
	default: cout << "Error: Net takoi jivotnY" << endl; break;
	}
	cout << a << s << b << " = " << c << endl;


#ifdef SWITCH_SYNTAX
#define CONST_1 1
#define CONST_2 2
#define CONST_3 3
#define CONST_N 4

	int var = 0;

	switch (var)
	{
	case CONST_1: /*...code1...*/;	break;
	case CONST_2: /*...code2...*/;	break;
		//.......................
		//.......................
	case CONST_N: /*...codeN...*/;	break;
	default: /*default code*/;
	}
#endif // SWITCH_SYNTAX
	main();
}


/*
----------------------------------
switch
if...else...



	//Loop
1. while - ���� � ������������;
2. do...while - ���� � ������������;
3. for - ���� �� �������� ����� ��������.
�������� - ��� ����������� ���������� ���� �����.
���� ����� - ��� ���, ������� ����� ��������� (����������� ���������)
----------------------------------
*/