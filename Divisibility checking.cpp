//You are given two positive integers a and b.
//In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b.
//It is possible, that you have to make 0 moves, as a is already divisible by b.
//You have to answer t independent test cases.
//Input
//The first line of the input contains one integer t (1≤t≤10^4) — the number of test cases. Then t test cases follow.
//The only line of the test case contains two integers a and b (1≤a,b≤10^9).
//Output
//For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b == 0)
            cout<<0<<endl;
        else
            cout<< (b-(a%b)) <<endl; //We have 2 numbers, a and b and each of them can be greater than the other, that doesn't matter. We are dividing a by b. We want to determine the number needed to be added with a so that it will be divisible by b.
                                    ///First we need to perform modular division of a by b [c=(a%b)]. Then we need to subtract the result from b [b-c]. This (b-c) is the number needs to get added with a in order of getting divisible by b. So this b-c or (b-a%b) is our answer.
    }
    return 0;
}
