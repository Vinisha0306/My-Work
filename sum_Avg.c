#include<stdio.h>

// Write a program in C to read 10 numbers from the keyboard and find their sum and average.

main()
{
    int i,n,sum=0;
    float Avg=1,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
        count++;
    }
    Avg=sum/count;
    printf("\n\nSum:%d",sum);
    printf("\nAvg:%.2f",Avg);
}