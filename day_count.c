#include<stdio.h>

// Write a C program to convert specified days into years, weeks and days.

int main()
{
    int date,years,weeks,days;
    
    printf("Enter any days:");
    scanf("%d",&date);
    
    years=date/365;
    weeks=(date % 365)/7;
    days=date-(years*365+(weeks*7));
    
    printf("years=%d\nweeks=%d\ndays=%d",years,weeks,days);
    
    return 0;
}