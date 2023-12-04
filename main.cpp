# include<iostream>
# include"myMax.h"//header file(.h) : " " mean it not std libary   
using namespace std;
/*
A libary includes a header file(.h) and a source file(,cpp)
    -The header file contains declarations
    -The source file contains definitons
*/ 

//this file is a source file
int main()
{
    int a[LEN] = {7, 2, 5, 8, 9};
    myMax(a, LEN);
    return 0;
}

