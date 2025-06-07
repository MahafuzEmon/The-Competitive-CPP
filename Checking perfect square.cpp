//You are given a year represented by a string s, consisting of exactly 4 characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form (a+b)2
//, where a
// and b
// are non-negative integers, or determine that it is impossible.
//For example, if s
// = "0001", you can choose a=0
//, b=1
//, and write the year as (0+1)2=1
//Input
//The first line of the input contains a single integer t
// (1≤t≤10^4
//) — the number of test cases.
//The following lines describe the test cases.
//The only line of each test case contains a string s
//, consisting of exactly 4
// characters. Each character is a digit from 0
// to 9
//Output
//On a separate line for each test case, output:
//Two numbers a
// and b
// (a,b≥0
//) such that (a+b)^2=s
//, if they exist. If there are multiple suitable pairs, you may output any of them.
//The number −1
// otherwise.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, num, root;
    cin>>t;
    while(t--)
    {
        cin>>num; //Though the number said input will be a string of numbers, there is no way to give input as strings. Hence if we store the input inside of a numerical type variable then we can directly access the number to work with.
        root=sqrt(num);
        if((root*root) != num) //This is the strategy used to check whether a number is perfect square or not. If squaring the root of the main number gets equal to the main number, then it's a perfect square. If not then it's not a perfect square.
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<0<<" "<<root<<endl;
        }
    }
    return 0;
}
