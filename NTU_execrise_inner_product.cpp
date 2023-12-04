# include<iostream>
using namespace std;

int main(){
    int a[4] = {40, 60, 80, 100};
    int b[4] = {1, 1, 1, 1};

    int ip[4] = {0};
    for(int i = 0; i < 4; i++)
    {
        ip[i]+= a[i] + b[i];
        cout << ip[i] << '\n';
    }
    cout << ip << '\n';

    return 0;
    
}