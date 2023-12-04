# include<iostream>
# include<fstream>//ifstream and ofstream are classed defined in <fstream>
# include<cstdlib>
using namespace std;

/*
ifstream and ofstream
*/ 
int main()
{
    ofstream scoreFile("temp.txt, ios::out");
    char name[20] ={0};
    int score = 0;
    char notFin = 0;
    bool con = true;
    if(!scoreFile)// !scoreFile returns true if the file is not created successfully.
        exit(1);
    while(con)
    {
        cin >> name >> score;
        scoreFile << name << " " << score << "\n"; 
        cout << "Continue (Y/N)";
        cin >> notFin;
        con = ((notFin == 'Y') ? true : false);

    }
    scoreFile.close();
    return 0;
}

