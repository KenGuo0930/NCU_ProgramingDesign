# include<iostream>
# include<string>
using namespace std;
/*
In the C++ standard, the parameter must be a constant reference
if calling by value, it will invoke itself infinitely many times
*/
class A 
{
private:
    int i;

public:
    A() { cout << "A"; }
    A(const A& a){ cout << "a";}//This is a copy constructor

};

void f (A a1, A a2, A a3)
{
    A a4;//print "A"
}

int main()
{
    A a1, a2, a3;
    cout << "\n===\n";
    //f(a1, a2, a3);
    A a4 = a1 ;
    return 0;
}