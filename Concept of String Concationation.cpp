//Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:
//
//deletes all the vowels,
//inserts a character "." before each consonant,
//replaces all uppercase consonants with corresponding lowercase ones.
//Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.
//
//Help Petya cope with this easy task.
//
//Input
//The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.
//
//Output
//Print the resulting string. It is guaranteed that this string is not empty.
//
//Examples
//Input
//tour
//Output
//.t.r
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    string text;
    cin>>text;
    for(int i=0; i<text.size(); i++)
    {
        text[i]=tolower(text[i]);
    }
    string consonant;
    for(auto i: text)
    {
        if(i!='a' && i!='e' && i!='i' && i!='o' && i!='u' && i!='y')
        {
            consonant=consonant+'.'+i; //String in C++ is dynamic, not static like in C. This means size of the string is not fixed here. Its size dynamically increases as we give it input. Therefore, at the very beginning, there are no slots in the string, its size remains zero. Hence, before initializing a string, if we try to access it through its indexes, it will throw an error, because they even do not exist. Hence, at the very beginning, rather than initializing it through indexes, we must initialize through concatination. This will prevent error.
        }
    }
    cout<<consonant<<endl;
    return 0;

}
