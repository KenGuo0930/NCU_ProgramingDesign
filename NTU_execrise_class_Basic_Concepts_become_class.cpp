# include<iostream>
# include<string>
using namespace std;

class MyVector
{
private:
    int n;
    int* m;
public:
    void init (int dim);
    void print();
};

void MyVector::init(int dim)
{
    n = dim;
    m = new int[0];
    for(int i = 0; i < n; i++)//initalization
        m[i];
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
    MyVector v;
    v.init(3);
    v.m = 3;
    v.print();
    delete [] v.m;
    return 0;
}