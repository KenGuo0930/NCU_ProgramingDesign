# include<iostream>
# include<fstream>//ifstream and ofstream are classed defined in <fstream>
# include<cstdlib>
using namespace std;

/*
    How to update text "Alex" to "Alexander"
        -The number function seekp() moves the window.
        -What should we do when we are at "A" ?
    Updating a file tyoically requres copy-and-paste
        -Because plian text file are sequential-access file
    The easiest way may be to read form the file, do modifcations, and then write to a completely new file.
*/ 
int main()
{
    ifstream inFile("test.txt");
    ofstream outFile("text1.txt");
    string name;
    int score = 0;
    if(inFile && outFile)//Both inFile and outFile existed. 
    {
        while (inFile >> name >> score)
        {
            if(name == "Alex")
                name = "Alexander";
            outFile << name << " " << score <<endl;
        }
        
    }
    inFile.close();
    outFile.close();

    return 0;
}

