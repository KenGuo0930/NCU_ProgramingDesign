# include<iostream>
# include<string>
using namespace std;

int main()
{

 // string getline
// string myStr;
// getline(cin, myStr);
// cout << myStr << endl;
// cout << myStr[0];

    //string substr
string s = "abcdefg";
cout << s.substr(2, 5) << endl;
cout << s.substr(2) << endl;

    //string find
if(s.find("bcd") != string::npos)
    cout << s.find("bcdi");

    // insertion, replace , erase
string testStr = "Today is not my day.";
cout << testStr << endl;
testStr.insert(9, "totally ");
cout << testStr << endl;
testStr.replace(17, 3, "NOT");
cout << testStr << endl;
testStr.erase(17, 4);
cout << testStr << endl;
    return 0;
}
