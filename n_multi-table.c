#include<stdio.h>

// Write a program in C to display the multiplier table vertically from 1 to n.

main()
{
    int i,n,j,k=1;
    
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d %d %d\n",k,i,k*i);
        }
        k++;
        
        printf("\n");
    }
}