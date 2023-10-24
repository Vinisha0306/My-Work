#include<stdio.h>

// Write a program in C to print individual characters of a string in reverse order.

int main()
{
    char name[50],rev[50];
    int len=0,a=0;

    printf("Enter your name :");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        len++;
    }

    for(int i=len-1;i>=0;i--)
    {
        rev[a]=name[i];
        a++;
    }

    printf("Rev name:");

    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c",rev[i]);
    }

    return 0;
}