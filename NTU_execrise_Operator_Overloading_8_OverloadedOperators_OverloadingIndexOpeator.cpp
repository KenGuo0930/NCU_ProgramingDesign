# include<iostream>
# include<string>
using namespace std;
/*
Another natural operation that is common for vector is indexing
  *Give vector v, we want to know/modify the element vi.
    for c++ array, we use the "indexing operator []".
*/
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
    void print() const;
    bool operator==(const MyVector& v) const; // overload operator
    double operator[](int i) const; // "(int i)" giving  index. the literal be given, not a variable
    double& operator[](int i);//return variable
        
};

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
bool MyVector::operator==(const MyVector& v) const
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

double MyVector::operator[](int i) const
{
    if(i < 0 || i >= n )// index i range 0 to n-1
        exit(1);// if index overrange, terminate the program
    return m[i];
}

double& MyVector::operator[](int i) 
{
    /*
    this overloading operator return reference,
    if users need to change variable,they can change it that reference be given/return 
    */
    // cout << "...";
    if(i < 0 || i >= n )
        exit(1);
    return m[i];//the m[i] may be changed .
}

int main()
{
    double d1[5] = {1, 2, 3, 4, 5};
    MyVector a1(5, d1);
    
    double d2[4] = {1, 2, 3, 4};
    MyVector a2(4, d2);
    const MyVector a3(a1);
    // a1[1] = 4;//error a1[1] is just a literal, not a variable
    a2[0] = 999;
    if(a1 == a3)
        cout << a2[0] << " " << a3[0];

    return 0;
}