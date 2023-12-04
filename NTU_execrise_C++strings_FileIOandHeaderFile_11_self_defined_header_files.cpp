# include<iostream>
# include"myMax.h"//header file(.h) : " " mean it not std libary   
using namespace std;
/*
A libary includes a header file(.h) and a source file(,cpp)
    -The header file contains declarations
    -The source file contains definitons
*/ 

//this file is a source file
int myMax(int [], int);
int main()
{
    int a[LEN] = {7, 2, 5, 8 ,9};
    cout << myMax(a, LEN);
    return 0;
}

int myMax(int a[], int len)
{
    int max = a[0];
    for(int i = 1; i < len; i++ )
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

