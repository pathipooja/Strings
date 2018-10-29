#include <stdio.h>
#include <stdlib.h>

#ifndef _STRHELP_
#define _STRHELP_

/* Find the length of a string.
 * Parameters:
 * str:  A '\0' terminated string
 * Returns: the length of the string.
 */
int my_strlen(char *str) {
    int len=0,i;
    for(i=0;str[i]!='\0';i++)
    {
            len++;
    }
    return len;
}

/* Reverses a string in-place.
 * input: a null-terminated string.
 * returns: reverses and returns the same string.
 */
char *my_strrev(char *str) {
     int len=0,i=0,j;
     char t;
    for(i=0;str[i]!='\0';i++)
    {
            len++;
    }
    j=len;
    for(i=0;i<len;i++)
    {
           while(i<j)
           {
           t=str[i];
           str[i]=str[j];
           str[j]=t;
           i++;
           j--;
           }
    }
    return str;
}

/* Reverses the characters in a string starting from the "start" index
 * to the end index.
 * input:
 * str: a null-terminated string.
 * start: the start index.
 * end: the end index.
 * returns: the same string with the characters shifted.
 */
char *my_strrev_range(char *str, int start, int end) {
    int i,j=end;
    char t;
    for(i=start;str[i]!='\0';i++)
    {
        while(i<j)
        {
      t=str[i];
      str[i]=str[j];
      str[j]=t;
      i++;
      j--;
        }
    }
return str;
}

/* Compares two strings.
 * input:
 * s1: string 1.
 * s2: string 2.
 * returns: 0 if both the strings are the same
 *          non-zero otherwise
 */
int my_str_cmp(char *s1, char *s2) {
    int i,c=0;
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
            if(s1[i]!=s2[i])
            {
               c++;
            }

    }
if(c==0)
    return 1;
    else
        return 0;
}

/* compares two strings ignoring the cases.
 * input:
 * s1: string 1.
 * s2: string 2.
 * returns: 0 if both are same
 *          non-0 otherwise
 * eg: my_str_i_cmp("HellO1", "hello1") returns 0
  int i,c=0;

    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {

  if(s1[i]>='A'&&s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
        printf("%s",&s1);

  if(s2[i]>='A'&&s2[i]>='Z')
        {
            s2[i]=s2[i]+32;
        }

        if(s1[i]!=s2[i])
        {
            c++;
        }

    }
    if(c==0)
    return 0;
    else
        return 1;

 */
int my_str_i_cmp(char *s1, char *s2) {
   int i;
    for (i = 0; s1[i]!='\0' && s2[i]!='\0'; ++i)
    {
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
           continue;
        else
           break;
    }

    /* Compare the last (or first mismatching in
       case of not same) characters */
    if (s1[i] == s2[i])
        return 0;

    // Set the 6th bit in both, then compare
    if ((s1[i] | 32) < (s2[i] | 32))
        return -1;
    return 1;
}


/* compares first "size" characters of 2 strings
 * input:
 * s1: string 1
 * s2: string 2
 * returns: 0 if both are equal
 *          non-0 otherwise.
 */
int my_str_cmp_range(char *s1, char *s2, char *size) {
    int l=0,i,c=0;
    for(i=0;size[i]!='\0';i++)
    {
            l++;
    }
      for(i=0;i<l;i++)
    {
     if(s1[i]!=s2[i])
   {
    c++;
   }
    }
   if(c==0)
   {
    return 0;
 }
 else
    return 1;
}
#endif
