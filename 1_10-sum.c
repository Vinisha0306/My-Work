#include<stdio.h>

// Write a C program to compute the sum of the first 10 natural numbers.

main()
{
    int i,sum=0;
    
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    
    printf("\n\nSum:%d",sum);
}