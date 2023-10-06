#include<stdio.h>

//Write a program in C to display the n terms of a harmonic series and their sum.

int main()
{
    int i,n;
    float sum=0.0;
    printf("Enter any number:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("1/%d + ",i);
        sum+=1/(float)i;
    }
        printf("\nA harmonic series sum:%f",sum);
}