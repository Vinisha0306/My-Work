#include<stdio.h>

// Separate the individual characters from a string

int main()
{
    char name[50],name1[50];

    printf("Enter your name :");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        printf(" %c ",name[i]);
    }

    return 0;
}