# include<iostream>
# include<string>
using namespace std;



/*
destructor use ~
    to:
        typicall we release
        dynamically allocated
        space in a destructor
*/


// try print and find what is printed first
class A
{
public:
    A() {cout << "A\n" ;}
    ~A() {cout << "a\n";}
};


class B
{
private:
    A a ;
public:
    B() {cout << "B\n";}
    ~B() {cout << "b\n";}
};

int main()
{
    B b;
    return 0;
}