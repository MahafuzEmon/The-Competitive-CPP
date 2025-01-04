//Theatre Square in the capital city of Berland has a rectangular shape with the size n×m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a×a.
//
//What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
//
//Input
//The input contains three positive integer numbers in the first line: n,m and a (1≤n,m,a≤10^9).
//
//Output
//Write the needed number of flagstones.
//
//Examples
//InputCopy
//6 6 4
//OutputCopy
//4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a, blockn,blockm; //The program will store very large numbers which cannot be stored inside of "int" datatype, cause range of "int" is (-2^31) to ((2^31)-1). Whereas, "long long" is almost twice of the "int", having a range from -2^63 to ((2^63)-1). So, to work with larger numbers, we can use "long long". At the end, "long" works as "int" on 32 bit system and as "long long" on a 64 bit system. All in a nutshell, go for "long" or "long long" to work with larger integers only.
    scanf("%lld %lld %lld", &n, &m, &a); //Format specifier for "long" is "%ld"(long decimal) and "%lld" (long long decimal) for "long long".
    {                               //In signed decimals, letter 'd' is used in format specifier. On the other hand, for unsigned decimals, letter 'u' is used instead of 'd' to indicate unsigned.
    if(n%a==0)
        blockn=n/a; //To fill the whole garden with stones, first we checked how many stones we need along with length and width. If a side of stone fits along with any side of the garden, we will take as much as needed. If it doesn't fit then we will take one more than the required amount to fill the whole garden.
    else
        blockn=(n/a)+1;
    }
    {
    if(m%a==0)
        blockm=m/a;
    else
        blockm=(m/a)+1;
    }
    long long block=blockn*blockm; //After determining required amount of stones along with length and width, we multiplied them to get the total number of stones needed to fill the garden.
    cout<<block<<endl;
    return 0;
}
