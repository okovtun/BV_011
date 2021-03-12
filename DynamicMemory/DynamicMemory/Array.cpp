


template<typename T>T* push_back(T arr[], int& n, int value)
{
	//////////////////////////////////////////////////////////////////////
	////////////	ДОБАВЛЕНИЕ ЗНАЧЕНИЯ В КОНЕЦ МАССИВА:	//////////////
	//////////////////////////////////////////////////////////////////////
	//1)Создаем буферный массив нужного размера (на 1 элемент больше), это будет наш новый массив:
	T* buffer = new T[n + 1];
	//2)Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)Удаляем исходный массив:
	//cout << typeid(arr).name() << endl;
	delete[] arr;
	//4)Подменяем адрес старого массива адресом нового массива:
	arr = buffer;
	//После этого в массиве 'arr' появился элемент, в который можно положить еще одно значение
	//5)Помещаем добавляемое значение в конец массива:
	arr[n] = value;
	//6)После того как в массив добавился элемент, количество его элементов увелчилось на 1:
	n++;
	//7)Mission complete - значение добавлено :-)
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

//Удавление элементов:
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
	//1) Создаем буферный массив:
	T** buffer = new T*[m + 1];
	//2) Копируем адреса существующих строк в новый массив указателей:
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	//3) Удаляем исходный массив указателей:
	delete[] arr;
	arr = buffer;
	//4) Создаем последнюю строку массива:
	buffer[m] = new T[n]{};
	//5)Увеличиваем количество строк:
	m++;
	//6)Возвращаем адрес нового массива на место вызова:
	return buffer;
}

template<typename T>T** push_row_front(T** arr, int& m, const int n)
{
	//1)Создаем буферный массив указателей нужного размера:
	T** buffer = new T*[m + 1];
	//2)Копируем адреса строк в новый массив:
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	//3)Удаляем исходный массив указателей:
	delete[] arr;
	//4)Создаем нулевую строку массива:
	buffer[0] = new T[n]{};
	//5)Увеличиваем количество строк:
	m++;
	//6)Возвращаем новый массив:
	return buffer;
}

template<typename T>void push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		//1)Создаем буферную строку:
		T* buffer = new T[n + 1]{};
		//2)Копируем исходную строку массива в буферную:
		for (int j = 0; j < n; j++)buffer[j] = arr[i][j];
		//3)Удаляем исходную строку:
		delete[] arr[i];
		//4)Подменяем адрес в массиве указателей на адрес новой строки:
		arr[i] = buffer;
	}
	n++;
}