


template<typename T>T* push_back(T arr[], int& n, int value)
{
	//////////////////////////////////////////////////////////////////////
	////////////	���������� �������� � ����� �������:	//////////////
	//////////////////////////////////////////////////////////////////////
	//1)������� �������� ������ ������� ������� (�� 1 ������� ������), ��� ����� ��� ����� ������:
	T* buffer = new T[n + 1];
	//2)�������� �������� �� ��������� ������� � ��������:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)������� �������� ������:
	//cout << typeid(arr).name() << endl;
	delete[] arr;
	//4)��������� ����� ������� ������� ������� ������ �������:
	arr = buffer;
	//����� ����� � ������� 'arr' �������� �������, � ������� ����� �������� ��� ���� ��������
	//5)�������� ����������� �������� � ����� �������:
	arr[n] = value;
	//6)����� ���� ��� � ������ ��������� �������, ���������� ��� ��������� ���������� �� 1:
	n++;
	//7)Mission complete - �������� ��������� :-)
	return arr;
}
template<typename T>T* push_front(T arr[], int& n, int value)
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
	return arr;
}

//��������� ���������:
template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}
template<typename T>T* pop_front(T* arr, int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)	buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}

template<typename T>T** push_row_back(T** arr, int& m, const int n)
{
	//1) ������� �������� ������:
	T** buffer = new T*[m + 1];
	//2) �������� ������ ������������ ����� � ����� ������ ����������:
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	//3) ������� �������� ������ ����������:
	delete[] arr;
	arr = buffer;
	//4) ������� ��������� ������ �������:
	buffer[m] = new T[n]{};
	//5)����������� ���������� �����:
	m++;
	//6)���������� ����� ������ ������� �� ����� ������:
	return buffer;
}

template<typename T>T** push_row_front(T** arr, int& m, const int n)
{
	//1)������� �������� ������ ���������� ������� �������:
	T** buffer = new T*[m + 1];
	//2)�������� ������ ����� � ����� ������:
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	//3)������� �������� ������ ����������:
	delete[] arr;
	//4)������� ������� ������ �������:
	buffer[0] = new T[n]{};
	//5)����������� ���������� �����:
	m++;
	//6)���������� ����� ������:
	return buffer;
}

template<typename T>void push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		//1)������� �������� ������:
		T* buffer = new T[n + 1]{};
		//2)�������� �������� ������ ������� � ��������:
		for (int j = 0; j < n; j++)buffer[j] = arr[i][j];
		//3)������� �������� ������:
		delete[] arr[i];
		//4)��������� ����� � ������� ���������� �� ����� ����� ������:
		arr[i] = buffer;
	}
	n++;
}