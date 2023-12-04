# include<iostream>
# include<string>
using namespace std;


int main()
{
    int score = 0;
    cout << "Pleas enter your score : ";
    cin >> score;
    string colour[4] = { "D", "C", "B", "A" };
    int grade = score / 10; 

    if(score > 100 || score < 0)
        cout << "warning : The score out of the range!!!" << endl;
    else if(score == 100)
        cout << colour[3] << endl;

    else if(score < 60)
        cout << "F" <<endl;
        else
        {
            for (int i = 0; i < 4; i++)
            {
                if(grade - 6 == i)
                cout << colour[i] << endl;
            }
        }
    return 0;
}