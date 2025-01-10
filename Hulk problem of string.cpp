//Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...
//
//For example if n=1, then his feeling is "I hate it" or if n=2 it's "I hate that I love it", and if n=3 it's "I hate that I love that I hate it" and so on.
//
//Please help Dr. Banner.
//
//Input
//The only line of the input contains a single integer n (1≤n≤100) — the number of layers of love and hate.
//
//Output
//Print Dr.Banner's feeling in one line
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string hate="I hate", love=" I love", that=" that", it=" it", output;
    for(int i=1, j=0; i<=n; i++)
    {
        if(j==0)
        {
            output+=hate;
            j=1;
        }
        else if(i%2 != 0 && j==1)
            output=output+" "+hate;
        else
            output+=love;

        if(i!=n)
            output+=that;
        else
            output+=it;
    }
    cout<<output<<endl;
    return 0;
}
