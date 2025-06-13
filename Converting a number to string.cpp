#include<iostream>
#include<string> //It contains the function which can convert a number to string.
using namespace std;
int main()
{
    int num=27;
    string str;
    str=to_string(num); //to_string() method takes a number as argument and returns the string version of it.
    for(auto i: str) //We can also use stringstream to do it.
        cout<<i<<endl;
    return 0;
}
