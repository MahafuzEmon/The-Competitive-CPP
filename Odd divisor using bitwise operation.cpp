#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n; //Our goal is to check whether a number is power of 2 or not.
        if((n & (n-1)) == 0) //A characteristic of numbers which are power of 2 is, they have one set bit (One set bit means in their binary representation, they have only a single 1, all the other bits are 0. Primarily means 1 by set bit) in their binary representation.
            cout<<"NO"<<endl; ///A characteristic of binary subtraction is, if we subtract a binary number by one, the rightmost set bit gets flipped (becomes 0) and all the other zeros after that becomes 1. All the other bits before the set bit remains as they were.
        else                  //Therefore, if we subtract a power of 2 by 1, they only set bit and zeros after it will get flipped. Hence, performing bitwise AND operation between them will return 0 as the bits became different. That's our key logic here.
            cout<<"YES"<<endl; //(00100 - 1 == 00011), (10100 - 1 == 10011)
    }
    return 0;
}
