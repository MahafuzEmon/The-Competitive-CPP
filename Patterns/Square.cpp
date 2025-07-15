#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) //The variable for column is getting re-initialized each time it is entering the second for loop. We can also create it outside of the 2nd loop but inside of the first loop, just at the moment before entering the 2nd loop to re-initialize it.
        {                       //If we don't want to re-initialize the column variable and keep the first value forever, we need to create the column variable outside of the whole loop.
            cout<<j+1<<" ";     //As the inner loop is getting re-created each time the first loop starts, the counter value gets initialized.
        }
        cout<<endl;
    }
    return 0;
}
