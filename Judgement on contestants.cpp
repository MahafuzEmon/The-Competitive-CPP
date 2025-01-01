//Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.
//A total of n participants took part in the contest (n≥k), and you already know their scores. Calculate how many participants will advance to the next round.
///Input
//The first line of the input contains two integers n and k (1≤k≤n≤50) separated by a single space.
//The second line contains n space-separated integers a1,a2,...,an (0≤ai≤100), where ai is the score earned by the participant who got the i-th place.
//The given sequence is non-increasing (Common term which means either decreasing or remaining same)(that is, for all i from 1 to n-1 the following condition is fulfilled: ai≥ai+1).
///Output
//Output the number of participants who advance to the next round.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int parti, refer, counter=0;
    scanf("%d %d", &parti, &refer);
    int num[parti];
    for(int i=0; i<=parti-1; i++)
    {
        scanf("%d", &num[i]); //The number input is given by putting a whitespace after each input. This can be also done using for loop.
    }                           //One scanf() function terminates taking an input if it gets a space. Could be a whitespace, enter, tab and many more, but just a space.
    for(int i=0; i<=parti-1; i++)
    {
        int t=num[refer-1];
        if(num[i]>=t && num[i]>0)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}
