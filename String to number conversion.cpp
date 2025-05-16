#include<iostream>
#include<sstream> //sstream (stringstream in short) header holds a class named "stringstream". This class allows us to create objects like iostream(cin/cout). This thing takes a string and stores it like a stream in itself. Hence, this also allows us to do stream type operation (using extraction or insertion operator) on string using stringstream object, therefore it is named string-stream (string to stream).
using namespace std;
int main()
{
    string num="566";
    stringstream convert; //object named convert created using stringstream class.
    convert<<num; ///While typing a statement using stream, the syntax says the stream (cin,cout,stringstream etc) will always be located at the very left side.
    int n;
    convert>>n; //As streams do not contain any datatype, when they are extracted to any variable of a specific datatype, they capture that datatype of the variable. Therefore the stream (Derived from string) is getting converted into integer here.
    cout<<"Number "<<n<<" added with 2 is "<<n+2<<endl;
    return 0;
    ///This method can be used to convert string to integer or any other number.
}
