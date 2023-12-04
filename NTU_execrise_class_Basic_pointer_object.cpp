# include<iostream>
# include<string>
using namespace std;
/*
This code as below can be change to more than clearly
    1.Use pointer object 
    2.Use const reference 
    3.&
you can refer to youtube video "孔令傑 程式設計 第11講(Class) 11"
*/
MyVector sum(MyVector v1, MyVector v2, MyVector v3)
{
    //asume that their dimension are identical
    int n = v1.getN();
    int* sov = new int[n];
    for(int i = 0 ; i < n ; i++)
        sov[i] = v1.getM(i) + v2.getM(i) +v3.getM(i);
    MyVector sumOfVec(n, sov);
    return sumOfVec;
}

int MyVector::getN()
{ 
    return n;
}
int MyVector::getM(int i)
{
    return M[i];
}

MyVector::MyVector(int d, int v[])
{
    n = d;
    m = new int[n]
    for(int i = 0; i < n; i++)
        m[i] = v[i];
    delete [];
}

