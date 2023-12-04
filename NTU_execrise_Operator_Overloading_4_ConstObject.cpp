# include<iostream>
# include<string>
using namespace std;

class MyVector
{
private:
    const int n;//const declared in front of the varible, this is a const variable
    double* m;
public:
    MyVector();//default constructor
    MyVector(int dim, double m[]);
    MyVector(const MyVector& v);//copy contsructor 
    ~MyVector();
    void print() const;//const declared behind the function, This is a const instance function
    bool isEqual(const MyVector& v) const;//const declared behind the function, This is a const instance function
};
        
// add menber initializars
/*
We need a menber initializer
    1. A specific operation for initiazling an instance variable
    2. Can also be used for initalizing non-constant instance varibles 
*/
MyVector::MyVector() : n(0), m(nullptr)//<- a menber initializer with default constructor : assign a value in Parentheses to initializing
{
}

MyVector::MyVector(int dim, double v[]) : n(dim)//<- a menber initializer with constructor
                                            //where is the value dim from ? from the user
{
    m = new double[dim];
    for(int i = 0; i < dim ;i++)
        m[i] = v[i];
}

MyVector::MyVector(const MyVector& v) : n(v.n)//<- a menber initializer with copy constrctor
                                            //where is the value v from ? from the user
{
    m = new double[n];
    for(int i = 0; i < n; i++)
        m[i] = v.m[i];
}
MyVector::~MyVector()
{
    delete [] m;//release m
}
void MyVector::print() const
{
    cout << "(";
    for(int i = 0; i < n-1 ; i++)
        cout << m[i] << ", ";
    cout << m[n-1] <<")\n"; 
}
bool MyVector::isEqual(const MyVector& v) const
{
    if(n != v.n) //compare dimension
        return false;
    else
    {
        for(int i = 0; i < n; i++) // compare element
        {
            if(m[i] != v.m[i])
                return false;
        }
    }
    return true;
}

int main()
{
    double d1[5] = {1, 2, 3, 4, 5};
    double d2[4] = {1, 2, 3, 4};
    MyVector a1(5, d1);
    MyVector a2(4, d2);
    MyVector a3(a1);

    cout << (a1.isEqual(a2) ? "Y" : "N");// "a1" is a object and invoke it's instance function
    cout << "\n";
    cout << (a1.isEqual(a3) ? "Y" : "N");
    cout << "\n";

    return 0;
}