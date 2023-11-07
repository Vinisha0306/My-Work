#include<stdio.h>

// Write a program in C to count the total number of alphabets, digits and special characters in a string.

int main()
{
    char string[20];
    int a=0,c=0,d=0;

    printf("Enter first string:");
    scanf("%s",&string);

    for(int i=0;string[i]!='\0';i++)
    {
            if ((string[i]>='A' && string[i]<='Z') || (string[i]>='a' && string[i]<='z'))
            {
                a++;
            }
            else if (string[i]>='0' && string[i]<='9')
            {
                c++;
            }
            else
            {
                d++;
            }
    }        

    printf("Number of Alphabets in the string is : %d \nNumber of Digits in the string is : %d\nNumber of Special characters in the string is :%d ",a,c,d);

    return 0;
}

