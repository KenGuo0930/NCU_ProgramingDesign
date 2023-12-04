#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[])
{   
char a[100] = "1234567890";
char* p = strchr(a, '8');
if(strchr(a, 'a') == nullptr)
    cout << "!!!\n";
cout << strchr(a, '4') << "\n";
cout << strchr(a, '4') - a; 
}