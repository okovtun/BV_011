#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int i = 0;	//������� �����
	int n;	//���������� ��������
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (n--)
	{
		cout << n << ".        ������\n";
		//i++;
	}
	cout << n << endl;

}