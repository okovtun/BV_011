#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		/*bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % n;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);*/
		
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
	//http://cplusplus.com/doc/tutorial/constants/
	/*cout << "Hello World!" << endl;
	cout << '+' << endl;
	cout << typeid(1024).name() << endl;
	cout << 3.14 << endl;*/
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}