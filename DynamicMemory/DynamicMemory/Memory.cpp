template<typename T>T** Allocate(const int m, const int n)
{
	//1) Создаем массив указателей:
	T** arr = new T*[m];
	//2) Выделяем память под строки:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n]{};
	}
	return arr;
}
template<typename T>void Clear(T** arr, const int m)
{
	//1) Удаляем строки двумерного массива:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}