#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 values for array sequentially: ";
    for(auto &x: arr) //Referencing is used here to bind the loop variable with the slots of the array. Hence manipulation on the loop variable will also get applied in the array slot as well.
    {
        cin>>x;
    }
    cout<<"The values of the array are: ";
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
