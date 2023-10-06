#include<stdio.h>

// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

main()
{
    int i,n,sum=0,j=9;
    int k=j;
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",j);
        sum+=j;
        j=j*10+k;
        
    }
    
    printf("\nThe sum of the series [ 9 + 99 + 999 + 9999 ...].:%d",sum);
}