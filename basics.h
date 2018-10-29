#include <stdio.h>
#include <stdlib.h>

/* Returns the count of the vowels occuring in the inputStr */
int countVowels(char *inputStr) {
    int count=0,i;
    for(i=0;inputStr[i]!='\0';i++)
    {
        if(inputStr[i]=='a'||inputStr[i]=='e'||inputStr[i]=='i'||inputStr[i]=='o'||inputStr[i]=='u'||inputStr[i]=='A'||inputStr[i]=='E'||inputStr[i]=='I'||inputStr[i]=='O'||inputStr[i]=='U')
        {
            count++;
        }
    }
    return count;
}

/* Given an input string, returns the no of unique characters
 * in the string */
int countUniqueChars(char *str) {
    int i=0,count = 0;
int c[26]={0};
for(i=0;str[i]!='\0';i++)
{
    c[str[i]-97]++;
}
for(i=0;i<26;i++)
{
    if(c[i]>0)
    {
        count++;
    }
}
    return count;
}

/* Capitalize each word occuring in the string.
 * Eg: i/p: "i lOve CodIng"
 *     o/p: "I Love Coding"
 *
 * i/p: "Han shot 1st."
 * o/p: "Han Shot 1st."
 * Modify the same string.
 */
char* capitalize(char *s) {

return s;
 }
