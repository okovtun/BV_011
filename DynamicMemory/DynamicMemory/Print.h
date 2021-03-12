#pragma once
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#define tab "\t"

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int m, const int n);

#include"Print.cpp"