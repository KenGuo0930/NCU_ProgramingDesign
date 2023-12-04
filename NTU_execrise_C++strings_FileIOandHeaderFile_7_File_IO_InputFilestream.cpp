# include<iostream>
# include<fstream>//ifstream and ofstream are classed defined in <fstream>
# include<cstdlib>
using namespace std;

/*
ifstream and ofstream
*/ 
int main()
{
    //To read data from a file, we create an input file stream.
    ifstream inFile("score.txt");//So, here we create an idstream object
    if(inFile)// if File exist = true
    {
        string name;
        int score = 0;
        int sumScore = 0;
        int scoreCount = 0;
    //(inFile >> name >> score)to read file :the fist file text assign to name, the other assign to score 
        while(inFile >> name >> score)
        {
            sumScore += score;
            scoreCount++;
        }
        if(scoreCount != 0)
            cout << "The score average : " << static_cast<double>(sumScore) / scoreCount;//sumScore convet to double type and divide by scoreCount
        else
            cout << "no grade!" << endl;
    }
    else
        cout <<"no flie be read!!!" << endl;
    inFile.close();//if file not exist, close
    return 0;
}

