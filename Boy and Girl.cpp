//Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance.
//Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.
//But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now.
//So he came up with a way to recognize users' genders by their user names.
///This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.
///Input
//The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.
///Output
//If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
///Examples
//Input
//wjmzbmr
//Output
//CHAT WITH HER!
//Input
//xiaodao
//Output
//IGNORE HIM!
//Input
//sevenkplus
//Output
//CHAT WITH HER!
//Note:
//For the first example. There are 6 distinct characters in "wjmzbmr". These characters are: "w", "j", "m", "z", "b", "r". So wjmzbmr is a female and you should print "CHAT WITH HER!".
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int letter[26]={0}, counter=0;
    cin>>name;
    for(char i: name)
    {
        letter[i-'a']=1; //To determine unique characters in a string, we have used a frequency array where we have stored which letters are present in the string. Later checked for active letters and incremented counter according to that.
    }           //To get unique characters, the best approach we can make is using "set" datatype, because "set" contains duplicate elements only once, it does not repeat an element. Therefore, if we store elements of a string to a set, then it will be a set full of unique elements.
    for(int i: letter) //We can even use unique() method in CPP for string manipulation to get the unique elements as well as the number of unique elements.
    {
        if(i==1)
            counter++;
    }
    if(counter%2 !=0)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<< "CHAT WITH HER!" <<endl;
    return 0;
}
