#include <iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], int n);
void FillRand(int** arr, const int m, const int n);
void Print(int arr[], int n);
void Print(int ** arr, const int m, const int n);
void push_back(int *&arr, int &n, const int value);
void pop_back(int *&arr, int &n);
void push_front(int *&arr, int &n, int value);
void insert(int *&arr, int &n, int index, int value);
void pop_front(int *&arr, int &n);
void clear(int **arr, const int m);
int** allocate(const int m, const int n);
int** push_back_row(int** arr, int& m, int n);
//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

int main()
{
	setlocale(LC_ALL, "Russian");
	int m;    int n;
	cout << "Enter the number of rows: "; cin >> m;    cout << "Enter the number of cols: "; cin >> n;

	// Sozdaem massiv ukazateley
	int** arr = new int*[m];
	//
	for (int i = 0; i < m; i++)
		arr[i] = new int[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << "\t";
	cout << endl;

	//
#ifdef DYNAMIC_MEMORY_1
	int n = 5;
	int *arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	push_back(arr, n, 10);
	Print(arr, n);
	push_front(arr, n, 23);
	Print(arr, n);
	insert(arr, n, 3, 29);
	Print(arr, n);
	pop_front(arr, n);
	Print(arr, n);
#endif

	FillRand(arr, m, n);
	Print(arr, m, n);
	/*clear(arr, m);
	arr = allocate(m, n);*/
	cout << "Добавление строки в конец:\n";
	arr = push_back_row(arr, m, n);
	Print(arr, m, n);
}


int** allocate(const int m, const int n)
{
	int ** arr = new int*[m]; // dynamic array of pointers to int
	for (int i = 0; i < m; ++i)
	{
		arr[i] = new int[n];
		// each i-th pointer is now pointing to dynamic array
	}
	return arr;
}
void push_back(int *&arr, int &n, const int value)
{
	int *newArray = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[n] = value;
	n++;
	delete[] arr;
	arr = newArray;
}

void pop_back(int *&arr, int &n)
{
	n--;
	int *newArray = new int[n];

	for (int i = 0; i < n; i++)newArray[i] = arr[i];

	delete[] arr;
	arr = newArray;

}


void push_front(int *&arr, int &n, int value)
{

	int *newArray = new int[n + 1];

	newArray[0] = value;

	for (int i = 0; i < n; i++)
	{
		newArray[i + 1] = arr[i];
	}
	delete[] arr;
	arr = newArray;

}

void insert(int *&arr, int &n, int index, int value)
{
	if (index<0 || index>n)
	{
		cout << "please enter an index between: 0 and " << n << endl;
		return;
	}

	int *newArray = new int[n + 1];

	newArray[index] = value;

	for (int i = 0; i < index; i++)
	{
		newArray[i] = arr[i];
	}

	for (int i = index + 1; i < n + 1; i++)
	{
		newArray[i] = arr[i];
	}

	delete[] arr;
	arr = newArray;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 10;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << "\t" << arr + i << endl;

	}
	cout << endl;
}
void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(arr + i) + j) = rand() % 100;
		}
	}
}

void Print(int ** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int** push_back_row(int** arr, int& m, int n)
{

	int** buffer = new int *[m + 1];
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];

	delete[] arr;
	buffer[m] = new int [n] {};
	m++;
	return buffer;
}
//Delete our rows of the array
void clear(int **arr, const int m)
{
	for (int i = 0; i < m; i++)
	{
		delete[]arr[i];
	}
	delete[] arr;

}

