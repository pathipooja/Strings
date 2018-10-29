
#include <stdio.h>
#include <stdlib.h>
#include "Strings.h"
#include "basics.h"
#include "stringHelpers.h"

int test_my_strlen() {
    char input[4][20] = {
        "One", "", "%786hYsds", NULL
    };
    int expected_result[] = {3, 0, 9, 0};
    int result;
    int test_cases = 4;
    int idx;

    for (idx = 0 ; idx < test_cases ; idx++) {
        fprintf(stdout, "Input: %s \t Expected Output: %d\n", input[idx], expected_result[idx]);
        result = my_strlen(input[idx]);
        if (result != expected_result[idx]) {
            fprintf(stderr, "\tFailed, your output: %d\n", result);
            return 0;
        } else {
            fprintf(stdin, "\tPassed\n");
        }
    }

    return 1;
}

int test_my_str_cmp() {

    //FILL THIS with test cases, Return 1 if all test cases passed else 0
int c;
c=my_str_cmp("pooja","pooja");
if(c==0)
{
    return 1;
}
else
    return 0;
}

int test_my_str_i_cmp() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0
int d=my_str_i_cmp("NANI1","Nani1");
if(d==0)
    return 1;
else
     return 0;
}


int test_my_str_cmp_range() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0
    int d=my_str_cmp_range("nani","nane","tw");
    if(d==0)
    return 1;
    else
        return 0;
}
int test_my_strrev() {
    char input[4][20] = {
        "qasdewrfgt", "", NULL, "a"
    };
    char expected[4][20] = {
        "tgfrwedsaq", "", NULL, "a"
    };
    int idx, test_cases = 4;
    char *result = NULL;

    for (idx = 0 ; idx < test_cases ; idx++) {
        printf("input: %s, expected output: %s\n", input[idx], expected[idx]);
        result = my_strrev(input[idx]);
        if (!my_str_cmp(expected[idx], result)) {
                 fprintf(stderr, "\tFailed, your output: %s\n", result);
                  return -1;
        }

        else {
              printf("Passed\n");

        }
    }

    return 0;
}
 int test_my_strrev_range() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0
  char input[4][20] = {
        "pooja", "aarthi", NULL, "abcde"
    };
    char expected[4][20] = {
        "pajoo", "ahtrai", NULL, "aedcb"
    };
    int idx, test_cases = 4;
    char *result = NULL;

    for (idx = 0 ; idx < test_cases ; idx++) {
        printf("input: %s, expected output: %s\n", input[idx], expected[idx]);
        result = my_strrev_range(input[idx],1,4);
        if (!my_str_cmp(expected[idx], result)) {
                 fprintf(stderr, "\tFailed, your output: %s\n", result);
                  return -1;
        }

        else {
              printf("Passed\n");

        }
       }
 }
int testcountvowel()
    {
        int c=0;
        c=countVowels("pooja");
        if(c==3)
        {
            return 1;
        }
        else
            return 0;
    }
int countuniq()
{
    int c=0;
    c=countUniqueChars("pooja");
    if(c==4)
    {
    return 1;
    }
    else
        return 0;
}
int testcapital()
{
    char *ch=capitalize("i Love cOdIng");
char *exp="i love coding";
if(my_str_cmp(ch,exp))
{
    return 1;
}
else{
        return 0;
}
}

int test_stringHelpers() {

    if (!test_my_strlen()) {
        fprintf(stderr, "Test for my_strlen() failed.\n");
    } else {
        fprintf(stdout, "Test for my_strlen passed.\n");
    }

    if (test_my_str_cmp()) {
        fprintf(stderr, "Test for my_str_cmp() failed.\n");
    } else {
        fprintf(stdout, "Test for my_str_cmp() passed.\n");
    }
       if (test_my_strrev()) {
        fprintf(stderr, "Test for my_str_rev() failed.\n");
    } else {
        fprintf(stdout, "Test for my_str_rev() passed.\n");
    }
     if (!test_my_strrev_range()) {
        fprintf(stderr, "Test for my_strrev_range() failed.\n");
    } else {
        fprintf(stdout, "Test for my_strrev_range() passed.\n");
    }
     if (!test_my_str_cmp_range()) {
        fprintf(stderr, "Test for my_str_cmp_range() failed.\n");
    } else {
        fprintf(stdout, "Test for my_str_cmp_range() passed.\n");
    }
     if (!test_my_str_i_cmp()) {
        fprintf(stderr, "Test for my_str_i_cmp() failed.\n");
    } else {
        fprintf(stdout, "Test for my_str_i_cmp() passed.\n");
    }

}
int test_basics() {
    // write tests for all the functions in basics.c
   if(!testcountvowel())
  {
        fprintf(stderr, "Test for countvowel() failed.\n");
    } else {
        fprintf(stdout, "Test for countvowel() passed.\n");

    }
   if(!countuniq())
   {
       fprintf(stderr, "Test for countunique() failed.\n");
    } else {
        fprintf(stdout, "Test for countunique() passed.\n");
   }

if(!testcapital())
{
 fprintf(stderr, "Test for testcapital() failed.\n");
    } else {
        fprintf(stdout, "Test for testcapital() passed.\n");
}
}
int testrevsentence()
{
reverse_sentence("I love Math");
}
int testrevwords()
{
reverse_words("I love Math");
}
int testwordcount()
{
    int arr={0,0,0,0,0,0,0,0};
    word_count("has have has had have his had have",arr  ,8);
}
int test_Strings() {
    // write tests for all the functions in Strings.c
     if (!testrevsentence()) {
        fprintf(stderr, "Test for revsentence() failed.\n");
    } else {
        fprintf(stdout, "Test for revsentence() passed.\n");
    }
     if (!testrevwords()) {
        fprintf(stderr, "Test for revwords() failed.\n");
    } else {
        fprintf(stdout, "Test for revwords() passed.\n");
    }
     if (!testwordcount()) {
        fprintf(stderr, "Test for wordcount() failed.\n");
    } else {
        fprintf(stdout, "Test for wordcount() passed.\n");
    }
}

int main(int argc, char **argv) {

    if (!test_stringHelpers()) {
        fprintf(stderr, "Test for stringHelpers failed.\n");
    } else {
        fprintf(stdout, "Test for stringHelpers passed.\n");
    }
if(!test_basics())
{
     fprintf(stderr, "Test for basics failed.\n");
}
else{
  fprintf(stdout, "Test for basics passed.\n");
}
if(!test_Strings())
{
     fprintf(stderr, "Test for strings failed.\n");
}
else{
  fprintf(stdout, "Test for strings passed.\n");
}
    return 0;
}
