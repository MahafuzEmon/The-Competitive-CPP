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
    cin>>name;
    int length_of_string=name.size(); //Till now, we have used length() method to get the length of a string. The issue is, length() method is only applicable for strings. Whereas, size() method can be used to get the length of any container like set, vector, string etc. Therefore, using a general method "size()" is better.

    set<char>letter; //Set is a special container in C++ under STL, which is an ordered list of unique elements. Meaning it doesn't take duplicate elements. If we insert same elements more than once, it will delete them and keep them only once. Also it is an ordered list, hence it sorts all the unique elements automatically.
    for(int i=0; i<length_of_string; i++) //As the question wants unique elements, we are using set. This is a very good approach whenever we need unique elements or number of unique elements.
    {
        letter.insert(name[i]); //insert() method is used to insert elements into a set or vector and its behaviour depends on the structure of the container. For example, if we try to insert an element which already exists inside of the set, then it won't insert that.
    }
    if(letter.size() % 2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
