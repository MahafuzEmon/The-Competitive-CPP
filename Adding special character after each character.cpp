//Take a string as input. If "Hello" is the input, then print it like this: "H.e.l.l.o"
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin>>text;

    string output;
    for(int i=0; i<text.size(); i++)
    {
        output+=text[i];
        if(i != (text.size()-1)) //We are doing this work in pair or as in group. In a group, we are adding the character along with the special character. But we don't want the special character to be added for the last element. Therefore, we have added a condition that if it's the last index, don't add the special character. Unless add it. We are doing this as a group or as a pair.
        output+='.';
    }
    cout<<output<<endl;
    return 0;
}
