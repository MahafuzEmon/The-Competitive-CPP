#include<iostream>
#include<algorithm> //min() and max() methods belong under algorithm header file
using namespace std;
int main()
{
    int a=3, b=26;
    cout<<min(a,b)<<endl; //Returns the smallest answer between two values.
    cout<<max(a,b)<<endl; //Returns the largest answer between two values.
    //Those two values can be anything like int, float, char etc.
    return 0;
}
