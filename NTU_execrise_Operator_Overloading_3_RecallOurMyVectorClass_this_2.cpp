# include<iostream>

using namespace std;

class A
{
private:
    int a;
public:
    void f() {cout << this << "\n";}
    A* g() {return this;}
};


int main()
{
    A obj;
    cout << &obj << "\n";
    obj.f();
    cout << (&obj == obj.g()) << "\n";
    return 0;
}