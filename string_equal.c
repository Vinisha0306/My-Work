#include<stdio.h>

//  Write a program in C to compare two strings without using string library functions.

int main()
{
    char string1[20],string2[20];
    int a=0;

    printf("Enter first string:");
    scanf("%s",&string1);
    printf("Enter second string:");
    scanf("%s",&string2);

    for(int i=0;string1[i]!='\0';i++)
    {
       if(string1[i]==string2[i])
       {
            a++;
       }
       else
       {
            a=1;
       }
    }

    (a>2)
        ? printf("\nStrings are equal.")
        : printf("\nStrings are not equal.");

    return 0;
}
