# include<iostream>
# include<string>
using namespace std;

void printArray(int[], int); // [] declaration a array

int main()
{
    int num[5] = {1, 2, 3, 4, 5};
    printArray(num, 5);
    return 0;
}

void printArray(int a[], int len)
{
    for(int i = 0; i < len; i++)
        cout << a[i] << "" << endl;
}