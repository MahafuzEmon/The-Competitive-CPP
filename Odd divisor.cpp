//You are given an integer n. Check if n
// has an odd divisor, greater than one (does there exist such a number x
// (x>1
//) that n
// is divisible by x
// and x
// is odd)
//For example, if n=6
//then there is x=3
//If n=4
//then such a number does not exist.
//Input
//The first line contains one integer t
// (1≤t≤104
//) — the number of test cases. Then t
// test cases follow.
//Each test case contains one integer n
// (2≤n≤1014)
//Output
//For each test case, output on a separate line:
//"YES" if n
// has an odd divisor, greater than one;
//"NO" otherwise.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        /*if(n%2 != 0) //All odd numbers have at least one odd divisor and that is the number itself.
        {
            cout<<"YES"<<endl;
            continue;
        } */ //Not necessary, the program written below does them all alone.
        while(n%2 == 0) //A number won't have an odd divisor if it is a power of 2. In fact, all the numbers in this world have at least one odd divisor except the numbers which are power of 2, because they are made up of many 2 multiplied with each other. 2 multiplied by itself gives us another even number, meaning another even factor.
        { //An even number which is not a power of 2 must has an odd prime number as factor in itself, which works as an odd divisor. Deep number theory.
            n/=2;
        }
        if(n == 1) //If the even number is a power of 2, after dividing it by 2 continuously, we will be left with only 1. If not, then we will be left with the multiplication of odd prime numbers after dividing it by 2 continuously.
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl; //The problem has t number of test cases. It is not necessary that we need to store answers of all test cases and print them at once. In each test case, we can print the output individually. That will also be accepted by the judge.
    }
    return 0;
}
