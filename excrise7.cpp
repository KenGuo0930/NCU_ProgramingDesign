# include<iostream>
# include<string>
using namespace std;

int main()
{
    int cost = 0;
    string pay = "";
    string statment = "you need to pay " ;
    cout << "Please enter your payment : ";
    cin >> cost;
    if(cost > 1000 || cost < 0)
        cout << "your payment can not over 1000 or less tham 0 NT";

    else if(cost == 1000  || cost > 500)
        cout << statment << "1000 NT";

    else if(cost <= 500 && cost > 100 )
        cout << statment << "500 NT";

    else if(cost <= 100 && cost > 50)
        cout << statment << "100 NT";

    else if(cost <= 50 && cost > 10)
        cout << statment << "50 NT";

    else if(cost <= 10 && cost > 5) 
        cout << statment << "10 NT";

    else if(cost <= 5 &&  cost > 1 )
        cout << statment << "5 NT";

    else if(cost == 1 )
        cout << statment << "1 NT";
}