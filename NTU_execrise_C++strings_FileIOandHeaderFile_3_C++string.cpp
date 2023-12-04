# include<iostream>
# include<string>
using namespace std;

int main()
{

    string s = "12345";
    int n = s.length();
    string t = s;
    for(int i = 0 ; i < n ; i++ )
        //indexing operator
        t[n - i - 1] = s[i];
    cout << t << endl;
    return 0;
}
