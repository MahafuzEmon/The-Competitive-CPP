//Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.
//Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
//This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
//Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
//You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
//Input: The first line contains an integer n. Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
//Output: Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //The question has asked to take an integer number as input and take that number of strings as input at individual lines. To do this in any case, we will create an array with a size given as input and will take that amount of input inside of each slot of an array.
    string a[n]; ///In cpp, we can also create an array of string. Hence, every single block of the array will contain a string.
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i].size()<=10)
        {
            cout<<a[i]<<endl;
        }
        else
        { //In the following line, the first square brackets contains the index for the array 'a'. First square bracket tells which element of the array 'a' needs to be executed. Second square bracket tells the index of the string present inside of the array. So, we are allowed to write them side by side to make this operation happen.
            cout<<a[i][0]<<(a[i].size())-2<<a[i][(a[i].size())-1]<<endl;
        }
    }
    return 0;
}
