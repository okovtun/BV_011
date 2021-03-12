#include <iostream>
using namespace std;

template <typename T>
T** Allocated(const int m, const int n);
template <typename T>
void Clear(T** arr, const int m);

template <typename T>
void Random(T& value);

template<typename T>void FillRand(T* arr, const int n);
template<typename T>void FillRand(int** arr, const int m, const int n);

template <typename T>void Print(T arr[], const int n);
template <typename T>void Print(T** arr, const int m, const int n);

template <typename T>
T* Push_back(T* &arr, int &n, int value);
template <typename T>
T* Push_Front(T* &arr, int &n, int value);

template <typename T>
T Insert(T* &arr, int &n, int index, int value);

template <typename T>
T Pop_back(T* &arr, int &n);
template <typename T>
T Pop_front(T* &arr, int &n);
template <typename T>
T Erase(T* &arr, int &n, int index);

//������� ���������� ������ � ����� �������
template <typename T>
T** push_row_back(T** arr, int& m, const int n);
template <typename T>
T** push_row_front(T** arr, int& m, const int n);

template <typename T>
void push_col_back(T** arr, int m, int &n);

//#define DYNAMIC_MEMORY_1
#define tab "/t"
int main()
{
	setlocale(LC_ALL, "");

	int m; //stroki
	int n; // stolbci
	cout << "������� ���������� �����   "; cin >> m;
	cout << "������� ���������� ��������    "; cin >> n;
	typedef float DataType;
	DataType** arr = Allocated<DataType>(m, n);

	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << "Memory allocated" << endl;
	// cout << "��������� ������ � ����� ������� :" << endl;

	arr = push_row_back(arr, m, n);
	cout << "������ ���������" << endl;
	Print(arr, m, n);
	cout << " ��������� ������" << endl;
	arr = push_row_front(arr, m, n);

	Print(arr, m, n);
	cout << "��������� ������� � ����� ������� :" << endl;
	push_col_back(arr, m, n);
	Print(arr, m, n);
	Clear(arr, m);
#ifdef DYNAMIC_MEMORY_1
	// int n; // ����������� ��������
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];
	int s_arr[5];
	//    cout << sizeof(arr)<< endl;
	//    cout << sizeof(s_arr)<< endl;
	int value;
	int index;
	cout << "������� ����������� �������� : "; cin >> value;
	Push_back(arr, n, value);
	FillRand(arr, n);
	Print(arr, n);
	Push_Front(arr, n, value);
	Print(arr, n);
	Insert(arr, n, index, value);
	Print(arr, n);
	Pop_back(arr, n);
	Print(arr, n);
	Pop_front(arr, n);
	Print(arr, n);
	Erase(arr, n, index);
	Print(arr, n);
#endif //DYNAMIC_MEMORY_1  delete [] arr;
	return 0;
}
template <typename T>
T** Allocated(const int m, const int n)
{
	// 1 ������� ������ ����������
	T** arr = new T*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n];
	}
	return arr;
}
template <typename T>
void Clear(T** arr, const int m)
{
	//1) ������� ������ ���������� �������:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	//2) ������� ������ ����������:
	delete[] arr;
}
template <typename T>
void Random(T& value)
{
	//    cout << typeid(value).name()<<endl;
	if (typeid(value) == typeid(float) || typeid(value) == typeid(double))
		value = double(rand() % 10000) / 100;
	else if (typeid(value) == typeid(char))
		value = rand();
	else
		value = rand() % 100;

}
template<typename T>void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//    *(arr+i)=rand()%100;    // * - ���������� �������� �� ������
		Random(arr[i]);
	}
}
template<typename T>void FillRand(int** arr, const int m, const int n)
{
	Random(arr[0][0]);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//           arr[i][j]=rand()%100;
			Random(arr[i][j]);
		}
	}
}
template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";   // �������� �������������� [] ���������� �������� �� �������
	}
	cout << endl;
}
template <typename T>
void Print(T** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template <typename T>
T Push_back(T* &arr, int &n, int value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//    cout << typeid(arr).name()<< endl;
	arr[n] = value;
	delete[] arr;
	arr = buffer;
	n++;
}

template <typename T>
T** push_row_back(T** arr, int& m, const int n)
{
	//������� �������� ������
	T** buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}

	// ������� ������ ����������
	delete[]arr;
	//  ������� ��������� ������ �������
	buffer[m] = new T[n]{};
	m++;
	return buffer;
}
template <typename T>
T** push_row_front(T** arr, int& m, const int n)
{
	T** buffer = new T*[m + 1];
	for (int i = 0; i < m; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//������� �������� ������ ����������
	delete[]arr;
	buffer[0] = new T[n]{};
	m++;
	return buffer;
}
template <typename T>
void push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		// ������� ��������� ������
		T* buffer = new T[n + 1]{};
		//�������� �������� ������ ������� � ���������
		for (int j = 0; j < n; j++)
		{
			buffer[j] = arr[i][j];
		}
		delete[]arr[i];
		//��������� ������ ������� ���������� �� ����� ����� ������
		arr[i] = buffer;
	}
	n++;
}
template <typename T>
T Push_Front(T* &arr, int &n, int value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[0] = value;
	n++;
}
template <typename T>
T Insert(T* &arr, int &n, int index, int value)
{
	if (index >= 0 && index < n)
	{

		T* buffer = new T[n + 1];
		buffer[index] = value;
		for (int i = 0; i < n; i++)
		{
			buffer[i + 1] = arr[i];
		}
		delete[] arr;
		arr = buffer;

	}
	if (index<0 || index>n)
	{
		cout << "������� ����� �������� ������� �� 0 �� " << n << endl;
	}
}
template <typename T>
T Pop_back(T* &arr, int &n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
}
template <typename T>
T Pop_front(T* &arr, int &n)
{
	T* buffer = new T[n--];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[] arr;
	arr = buffer;
}
template <typename T>
T Erase(T* &arr, int &n, int index)
{
	cout << "������� ������ �������� �������: " << endl;
	cin >> index;
	if (index >= 0 && index < n)
	{
		T* buffer = new T[n - 1];
		for (int i = 0; i < index; i++)
		{
			buffer[i] = arr[i];
		}
		for (int i = index; i < n; i++)
		{
			buffer[i + 1] = arr[i + 1];
		}
		delete[] arr;
		arr = buffer;
		n--;
	}
}