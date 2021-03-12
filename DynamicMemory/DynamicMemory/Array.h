#pragma once

//Добавление элементов
template<typename T>T* push_back(T arr[], int& n, int value);
template<typename T>T* push_front(T arr[], int& n, int value);
//Удавление элементов:
template<typename T>T* pop_back(T arr[], int& n);
template<typename T>T* pop_front(T arr[], int& n);

////////////////////////////////////////////////////////////////////////
template<typename T>T** push_row_back(T** arr, int& m, const int n);	//Добавление строки в конец массива
template<typename T>T** push_row_front(T** arr, int& m, const int n);	//Добавление строки в начало массива

template<typename T>void push_col_back(T** arr, const int m, int& n);

#include"Array.cpp"