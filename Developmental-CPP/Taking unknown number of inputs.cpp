//In this case, we don't know how many inputs the user is going to give or how many inputs or till when we need to take inputs from the user or from a file.
///To solve this issue when we don't know how many inputs to take, we can use istream (cin) as a condition.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0, num=0;
    cout<<"Enter your numbers:"<<endl;
    while(cin>>num) //If we use istream as a condition (we can also use ostream as a condition depending on the context and need, the principle of working as a condition is still same), the program checks the state of the istream to get either true or false as result for the condition.
    {       //The state of the istream can be either valid or invalid (which means error as well). If the state is valid, the program considers it as true and if it's invalid (or error) then the program considers it as false for the condition.
              //The stream gets invalid if it encounters an end-of-file or gets any invalid input. While reading a file, if it gets to the end of it, it will encounter an end-of-file. Again if the user gives end-of-file command from keyboard(By pressing Ctrl+Z), it will also get invalid.
              //Say for example, the istream is extracting data from it to an integer type variable. While giving input, if we enter some data other than integer type, then because of the invalid datatype, the istream will get invalid as well.
            //Because of these reasons, if the istream gets invalid, program will consider it as false and the loop or condition will get terminated. Anything other than that will be accepted as valid input which will keep the istream valid and the conditon true.
            ///If we press enter (which means newline character \n) without giving any input just to terminate loop as invalid input, it won't get terminated. Because the extraction operator doesn't count whitespaces, newline while shifting input and skips them.
            ///Hence, even if we press enter from our keyboard without giving any input, the extraction operator skips it. As a result no data gets into the variable and it keeps the istream in valid state. As it isn't accepting that newline, the valid state of istream remains valid.
            //So if we want to terminate the loop using enter, we need to use another strategy of using getline(). Pressing enter won't trigger end-of-file or invalid input as it is not counted.
            //While reading a file, we can use istream as condition so that the loop will continuously read the file until it reaches the end and EOF gets triggered.
        sum=sum+num;
    }
    cout<<"The summation is: "<<sum<<endl;
    return 0;
}
