# include<iostream>
# include<string>
using namespace std;

class MyVector
{
private:
    int n;
    double* m;
public:
    MyVector();//default constructor
    MyVector(int dim, double v[]);
    MyVector(const MyVector& v);//copy contsructor
    ~MyVector();
    void print();
    bool isEqual(const MyVector& v);//input a address can reduce run time(depand on your project)
};
        

MyVector::MyVector()//defaulr constructor
{
    n = 0;
    m = nullptr;
}

MyVector::MyVector(int dim, double v[])//constructor
{
    n = dim;
    m = new double[dim];
    for(int i = 0; i < dim ;i++)
        m[i] = v[i];
}

MyVector::MyVector(const MyVector& v)//copy constrctor
{
    n = v.n;
    m = new double[n];
    for(int i = 0; i < n; i++)
        m[i] = v.m[i];
}
MyVector::~MyVector()
{
    delete [] m;//release m
}
void MyVector::print()
{
    cout << "(";
    for(int i = 0; i < n-1 ; i++)
        cout << m[i] << ", ";
    cout << m[n-1] <<")\n"; 
}

bool MyVector::isEqual(const MyVector& v)
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