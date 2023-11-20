#include<stdio.h>
#include<string.h>

int main()
{
    char string[20],n;
    int count=0;
    
    printf("Enter any string:");
    gets(string);

    printf("Enter any character for string:");
    scanf("%c",&n);

    for(int i=0; string[i]!=NULL; i++)
    {
        if(n==string[i])
        {
            count++;
        }
    }

    printf("\n%c found %d number of time",n,count);

    return 0;
}