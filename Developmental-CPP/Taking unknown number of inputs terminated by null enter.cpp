#include<iostream>
#include<sstream> //Generally, header files in c++ don't end by (.h) extension like c. It's plain.
#include<string> //String header file contains empty() method, which checks if a string is empty or not. Returns true if it's empty, else false.
using namespace std;
int main()
{
    string input; int sum=0;
    cout<<"Enter numbers to add them up:"<<endl;
    while(1)
    {
        getline(cin,input); //getline() is used to take string as input including all types of whitespaces except newline. It accepts whitespaces and everything as input but ignores newline and stores them as string. Syntax is getline(cin, var_name).
        if(input.empty()) //getline() returns an empty string to the variable if the user doesn't type anything and directly presses enter, which is our termination condition here. Hence we are checking if the input variable is empty or not. If yes then terminate the loop, else keep going.
            break;
        stringstream converter;
        converter<<input;
        int value=0; ///These statements between "if" and "else if" breaks them. Because of these, we can't use "else if" after the if. Hence we need to use if again. Using else if is sorta similar to using if multiple times.
        if(converter>>value) //Used the extraction operator as condition. If the stream is an actual number, then it can be successfully extracted to the value variable and the condition will be considered as true because of the valid state of the operator. Hence it's body will be executed.
            sum+=value; //If the stream is not pure number, extraction operator cannot extract it into the variable successfully and it will be considered as invalid. Hence this block won't be executed.
                        ///To identify if the string is a pure number or not, this stream operation is used as condition inside of "else if" statement.
                        ///If the string is "4er", then while extracting it into integer variable, only the integer part of the string will get extracted from it, the character part will remain in the stream.
                        ///Execution starts from the left, hence extracting "4er" won't be invalid as the first character is an integer and it will be extracted successfully and the condition will get true. On the other hand, "er4" will be invalid as the first character is not integer and the condition will get false.
        else
            cout<<"Your have entered something wrong. Enter integer numbers."<<endl; //Then this block will be executed which says to enter the correct input.
    }
    cout<<"The summation of your numbers is: "<<sum<<endl;
    return 0;
}
