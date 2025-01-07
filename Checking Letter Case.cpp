//Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.
//
//Input
//The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.
//
//Output
//Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.
//
//Examples
//Input
//HoUse
//Output
//house
//Input
//ViP
//Output
//VIP
//Input
//maTRIx
//Output
//matrix
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    string text;
    cin>>text;
    int lowercount=0, uppercount=0;
    for(auto i: text)
    {
        if(islower(i)) //islower() is a build-in function under "ctype.h" header which checks if a letter is in lowercase or not. Returns true if it's in lowercase, returns false if it's in uppercase.
            lowercount++;
        else if(isupper(i)) //Same function as islower(), belongs under "ctype.h" header file and checks if a letter is in uppercase or not.
            uppercount++;
    }
    if(lowercount<uppercount)
    {
        for(int i=0; i<text.size(); i++)
        {
            text[i]=toupper(text[i]);
        }
    }
    else
    {
        for(int i=0; i<text.size(); i++)
        {
            text[i]=tolower(text[i]);
        }
    }
    cout<<text<<endl;
    return 0;

}
