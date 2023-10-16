#include<stdio.h>

int main()
{
    int n,temp;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int a[n];
    
    printf("\n\nEnter array A......\n");
    
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }    
        }
    }
    
    printf("\n\nSecond largest number:");
    
    for(int i=0;i<n;i++)
    {
        (i==n-2)
            ? printf("%d ",a[i])
            : printf("");
    }
    
    return 0;
}