
# include<fstream>//ifstream and ofstream are classed defined in <fstream>
using namespace std;

/*
ifstream and ofstream
*/ 
int main()
{
    // To open and close an output file stream,we use ofstream to create an object
    ofstream myFile;//Now we create myFile object

    // ios::app = The window start at the end; never mofify existing data.
    //ios is a class; out, app and ate are public static varisbles
    myFile.open("temp.txt", ios::app);//(default ios::out) 
    myFile << "1 abc\n &%^ " << 123.45; //Writing string
    myFile.close();//close file "temp.txt"

    return 0;
}
//Regardless of the extension name we are creating/opending a plain text file.