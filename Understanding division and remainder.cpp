//Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100.
//What is the minimum number of bills Allen could receive after withdrawing his entire balance?
//Input
//The first and only line of input contains a single integer n (1≤n≤10^9)
//Output
//Output the minimum number of bills that Allen could receive.
//Examples
//Input
//125
//Output
//3
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int n, counter=0;
    int bill[5]={1,5,10,20,100};
    cin>>n;
    for(int i=4; i>=0; i--)
    {
        counter+=n/bill[i]; //Dividing 50 by 5 says how many 5s we need to add in order to make 50. In other words, how many 5s are present in 50 can be determined by dividing 50 by 5.
        n%=bill[i]; //Modular division of 50 by 5 says after adding all the 5s present in 50, do we need to add any value in order to make it 50. In other words, after adding all the 5s present in 50, how much we need to add more to make it an exact 50. The remainder value must be less that 5.

    }
    cout<<counter<<endl;
    return 0;
}
