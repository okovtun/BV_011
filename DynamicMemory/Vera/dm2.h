#pragma once
#ifndef dm2_h
#define dm2_h




#include <iostream>
using namespace std;

#define tab "\t"

void FillRand (int arr[],  int n);
void FillRand (int** arr, const int m, const int n);
void Print (int arr[],  int n);
void Print (int ** arr, int m, int n);
void push_back (int *&arr, int &n, const int value);
void pop_back (int *&arr, int &n);
void push_front (int *&arr, int &n, int value);
void insert (int *&arr, int &n,  int index, int value);
void pop_front (int *&arr, int &n);
void clear (int **arr,const int m);
int** allocate(const int m, const int n);
int** push_back_row(int** arr, int& m, int n);
int** push_row_front(int**arr,int&m,const int n);
int** push_col_front(int**arr,int m,int& n);
int** insert_col(int**arr,int m,int& n, int index);
int** pop_col_front(int**arr,int m,int& n);
int** pop_col_back(int**arr,int m,int& n);


#endif
