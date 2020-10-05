#include<iostream>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Russian");

	/* «адача 1.
	Ќаписать программу, котора€ преобразует введенное с клавиатуры дробное
	число в денежный формат.
	Ќапример, число 12,5 должно быть преобразовано к виду 12 грн. 50 коп.
	ѕреобразование числа в денежный формат.
	¬ведите дробное число -> 23.6
	23.6 грн. Ч это 23 грн. 60 коп.*/

	float money; //переменна€ вводимого дробного числа

	cout << "¬ведите любое дробное число: "; cin >> money;
	money += .00001;
	int rubl = money;
	int copeika = (money - rubl+.00001) * 100;
	//cout << typeid(money).name() << endl;
	cout << money << " - это " << rubl << " руб." << copeika << " коп.\n";
	cout << (int)money << " руб.\t\t" << int((money - (int)money) * 100) << " коп.\n";
}