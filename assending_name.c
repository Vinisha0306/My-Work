#include<stdio.h>

int main()
{
    char name[50],tem;
    int len=0,a=0;

    printf("Enter your name :");
    scanf("%[^\n]",&name);

    for(int i=0;name[i]!='\0';i++)
    {
        len++;
    }

    for(int i=0;name[i]<len;i++)
    {
        for(int j=i+1;name[j]!='\0';j++)
        {

            if(name[i]>name[j])
            {
                tem=name[i];
                name[i]=name[j];
                name[j]=tem;
            }
        }
        printf("%s",name);
    }

    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c ",name[i]);
    }


    return 0;
}