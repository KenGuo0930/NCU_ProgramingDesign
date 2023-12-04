#include <iostream>
using namespace std;


int main()
{
    float Fahrenhent = 0;
    cout << "What is the Fahrenhent degree of the temperature taday ? ";
    cin >> Fahrenhent;
    float Celsius  = (Fahrenhent - 32) * 5 /9 ; 
    cout << "The temperature degree was converted to Celsius is  : " << Celsius;
    }