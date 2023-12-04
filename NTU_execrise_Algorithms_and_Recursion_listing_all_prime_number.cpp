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

int main()
{
    int n = 0;
    for(int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for(int j = 2; j < i; j++)
        {
            if( i % j == 0)
            {
                isPrime = false;// j can be divide , so j is a composite number
                break;
            }
        }
    if(isPrime == true)// j can not be divide, so j is a prime number
        cout << i << " ";
    }
}