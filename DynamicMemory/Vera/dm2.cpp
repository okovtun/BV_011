#include "dm2.h"



int** allocate(const int m, const int n)
{
    int ** arr = new int*[m]; // dynamic array of pointers to int
    for (int i = 0; i < m; ++i)
    {
		arr[i] = new int[n] {};
        // each i-th pointer is now pointing to dynamic array
    }
    return arr;
}
 void push_back (int *&arr, int &n, const int value)
{
    int *newArray = new int [n+1];
    for (int i=0;i < n;i++)
    {
         newArray[i] = arr[i];
    }
    newArray[n] = value;
    n++;
    delete [] arr;
    arr = newArray;
}

void pop_back (int *&arr, int &n)
{
    n--;
    int *newArray = new int[n];

    for (int i=0;i < n;i++)newArray[i] = arr[i];
    
delete[] arr;
arr = newArray;

    }


void push_front (int *&arr, int &n, int value)
{
    
    int *newArray = new int[n+1];

    newArray[0] = value;

    for (int i=0;i < n;i++)
    {
        newArray[i+1] = arr[i];
    }
    delete[] arr;
    arr = newArray;

}

void insert (int *&arr, int &n,  int index, int value)
{
    if(index<0 || index>n)
    {
        cout << "please enter an index between: 0 and " << n << endl;
        return;
    }

    int *newArray = new int[n+1];

    newArray[index] = value;

    for (int i=0;i < index; i++)
    {
        newArray[i] = arr[i];
    }

    for (int i=index+1;i < n+1; i++)
    {
        newArray[i] = arr[i];
    }

    delete[] arr;
    arr = newArray;
}

void FillRand (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        *(arr + i) = rand()%10;
    }
}

void Print (int arr[], const int n)
{
    for (int i=0;i < n;i++)
    {
        
        cout << arr[i]<< "\t" << arr + i << endl;
        
    }
    cout << endl;
}
void FillRand (int** arr, const int m, const int n)
{
    for (int i=0;i < m; i++)
    {
        for (int j=0;j < n; j++)
        {
            *(*(arr + i) + j) = rand()%100;
        }
    }
}

void Print (int ** arr, int m, int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << arr[i][j]<< tab;
        }
        cout << endl;
    }
    
    cout << endl;
}

int** push_back_row(int** arr, int& m, int n)
{
    
    int** buffer = new int * [m+1];
    
    
    for (int i = 0; i < m; i++)
        buffer[i] = arr[i];
    

    delete [] arr;
    buffer[m] = new int [n] {};
    m++;
    return buffer;
}


int**push_row_front(int**arr,int&m,const int n)
{
    int**buffer = new int * [m+1];
    for (int i=0;i<m;i++)
    buffer[i+1] = arr[i];
    delete [] arr;
    buffer[0] = new int [n] {};
    m++;
    return buffer;

}

int** push_col_front(int**arr,int m,int& n)
{
    
    int**buffer = allocate(m, n+1);
    
    for (int i=0;i < m;i++)
    {
        for (int j=0;j<n+1;j++)
        {
          /*  if(j==0)
                buffer[i][j] = 0;
            else*/
                buffer[i][j+1] = arr[i][j];
        }
    }
    
    clear (arr, m);
    
    n++;
    
    return buffer;
}


int** insert_col(int**arr,int m,int& n, int index)
{
    
    int**buffer = allocate(m, n+1);
    
    for (int i=0;i < m;i++)
    {
        for (int j=0;j<n+1;j++)
        {
            /*if(j==index)
                buffer[i][j] = 0;*/
            if(j<index)
                buffer[i][j] = arr[i][j];
            if(j>index)
                buffer[i][j] = arr[i][j-1];
        }
    }
    
    clear (arr, m);
    
    n++;
    
    return buffer;
}

int** pop_col_front(int**arr,int m,int& n)
{
    
    int **buffer = new int * [m];
    
    for (int i = 0; i < m; ++i)
    {
        buffer[i] = new int[n-1];
    }
    
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            buffer[i][j] = arr[i][j+1] ;

    delete [] arr;
    //buffer[0] = new int [n] {};
    n--;
    return buffer;
}



int** pop_col_back(int**arr,int m,int& n)
{
    
    int **buffer = new int * [m];
    
    for (int i = 0; i < m; ++i)
    {
        buffer[i] = new int[n-1];
    }
    
    for (int i=0;i<m;i++)
        for (int j=0;j<n-1;j++)
            buffer[i][j] = arr[i][j] ;

    delete [] arr;
    //buffer[0] = new int [n] {};
    n--;
    return buffer;
}



//Delete our rows of the array
void clear (int **arr,const int m)
{
for (int i=0; i<m;i++)
{
    delete[]arr[i];
}
delete[] arr;
    
}

