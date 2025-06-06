///Petya mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically.
//The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
///Input
//Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive.
//It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.
///Output
//If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1".
//If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    for(int i=0; i<strlen(s1); i++)
    {
        s1[i]=tolower(s1[i]); //strcmp() function is case-sensitive. We want the operation to be case-insensitive. The only way to do that is so convert the whole two strings into same case using the case-conversion function.
        s2[i]=tolower(s2[i]);
    }
    printf("%d", strcmp(s1,s2)); //That rare strcmp() function got used to solve this problem. Could be done manually as well.
    return 0;
}
