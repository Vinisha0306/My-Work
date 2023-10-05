#include<stdio.h>

// Write a program in C to display the cube of the number up to an integer.
main()
{
    int i,n;
    
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("cube of %d:%d\n",i,i*i);
    }

}