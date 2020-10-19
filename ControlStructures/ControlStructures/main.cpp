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
	cout << "Введите температуру: "; cin >> temperature;

	if (temperature > 70)  cout << "Вы на другой планете!" << endl;
	else if (temperature > 50)	cout << "Вы в пустыне" << endl;
	else if (temperature > 35)	cout << "Аццкая жара" << endl;
	else if (temperature > 25)	cout << "Жарко" << endl;
	else if (temperature > 10)	cout << "Тепло" << endl;
	else if (temperature > 0)	cout << "Прохладно" << endl;
	else	cout << "Зима" << endl;
#endif // CHAIN
	
	/*int n;
	cout << "Введите число: "; cin >> n;
	if (n >= 0 && n <= 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы Firefox" << endl;
	}*/

#ifdef TEST
	int counter = 0;	//счетчик правильных ответов
	char answer;		//Ответ ползователя

	cout << "Вопрос 1:\n";
	cout << "На какой планете мы живем?\n";
	cout << "A - Меркурий;\n";
	cout << "B - Венера;\n";
	cout << "C - Земля;\n";
	cout << "D - Марс;\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'C' || answer == 'c')
	{
		system("color 0A");
		cout << "Бинго" << endl;
		counter++;
	}
	else
	{
		system("color 0C");
		cout << "Ответ неверный" << endl;
	}

	system("PAUSE");
	system("color 07");
	system("CLS");
	cout << "Вопрос 2:\n";
	cout << "На каком контитненте мы живем?\n";
	cout << "A - Европа;\n";
	cout << "B - Азия;\n";
	cout << "C - Африка;\n";
	cout << "D - Мальдивы;\n";
	cout << "Ваш ответ: "; cin >> answer;
	if (answer == 'D' || answer == 'd')
	{
		system("color 0A");
		cout << "Бинго" << endl;
		counter++;
	}
	else
	{
		system("color 0C");
		cout << "Ответ неверный" << endl;
	}

	cout << "Вы закончили первый этап тестирования, и набрали " << counter << " очков\n";
#endif // TEST

	double a, b, c;	//Числа, вводимые с клавиатуры
	char s;		//Sign - знак операции
	cout << "Введите выражение: ";
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
1. while - цикл с предусловием;
2. do...while - цикл с постусловием;
3. for - цикл на заданное число итераций.
Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно зациклить (многократно выполнить)
----------------------------------
*/