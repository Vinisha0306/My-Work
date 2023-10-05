#include<stdio.h>

// Write a program in C to display n terms of natural numbers and their sum.

main()
{
    int i,n,sum=0;
    
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    
    printf("\n\nSum:%d",sum);
}