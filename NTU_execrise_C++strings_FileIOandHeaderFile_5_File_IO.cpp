
# include<fstream>//ifstream and ofstream are classed defined in <fstream>
using namespace std;

/*
ifstream and ofstream
*/ 
int main()
{
    // To open and close an output file stream,we use ofstream to create an object
    ofstream myFile;//Now we create myFile object
    myFile.open("temp.txt");//opend the file "temp.txt"
    myFile << "1 abc\n &%^ " << 123.45; //Writing string
    myFile.close();//close file "temp.txt"

    return 0;
}
