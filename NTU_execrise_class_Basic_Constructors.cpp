# include<iostream>
# include<string>
using namespace std;


/*
An Object is an instance of a Class. When a class is defined,
no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

*/
class MyVector
{
    private:
        int n; 
        int* m;

    public:
        //constructors
        MyVector(); //default constructor
        MyVector(int dim, int value = 0);
        void print();
};

MyVector::MyVector()//initalization
{
    n = 0;
    m = nullptr; 
}

MyVector::MyVector(int dim, int value)
{
    n = dim;
    m = new int[n];
    for(int i = 0; i < n ; i++)
        m[i] = value;
}

void MyVector::print()
{
    cout << "(";
    for(int i = 0; i < n-1; i++)
        cout << m[i] << ",";
    cout << m[n-1] << ")\n";
} 

int main()
{
    MyVector v1(1);
    MyVector v2(3, 8);
    v1.print(); //(8 8 8 )
    v2.print(); //
    return  0 ;
}