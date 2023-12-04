# include<iostream>
# include<string>
using namespace std;
/*
Pseudocode:
    Give an interger n:
    for i form 2 to n
     assume that i is a prime number
     for i from 2 to i -1
        if j divides i
         set i to be a composite number
    if i still consider as prime
        print i
*/
bool isPrime(int x);
int main()
{
    int n = 0;
    cout << "set number of n : " << endl;
    cin >> n;
    for(int i = 2; i <= n ; i++)
    {
        if(isPrime(i) == true)
            cout << i << " ";
    } 
    return 0;
}

bool isPrime(int x)
{
    for(int i = 2; i * i <= x ; i++) // Thinking why we using square of i to find the prime number
    {
        if(x % i == 0)
        return false;
    }
    return true;
}