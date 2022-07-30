#include<stdio.h>
int main ()
{
    int arr[4];
    int i,count=0;
    for (i=0;i<4;i++)
    {
        printf("Enter the element - %d:   ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<4;i++)
    {
        if (arr[i]<0)
        count++;
    }

   printf("Negative No : %d",count);


    }
