#include <iostream>
using namespace std;

// compare getline and only using cin

// not using getline
// int main(){
//     string name;
//     string city;
//     string hobby;
//     cout << "what's your name : ";
//     cin >> name;
//     cout << "where you live : ";
//     cin >> city;
//     cout << "favorite hobby";
//     cin >> hobby;
//     string result  = "Hi, my name " + name + " and I live in " + city + " my favorite is " + hobby ;
//     cout << result ;
// }


//  add getline
int main(){
    string name;
    string city;
    string hobby;
    cout << "What your name ? ";
    getline(cin, name);
    cout << "where you live ? ";
    getline(cin, city);
    cout << "What is your favorite hoobby ? ";
    getline(cin, hobby);
    string result = "Hi, my name " + name + " and I live in " + city + " I interesting in " + hobby;
    cout << result;
}

