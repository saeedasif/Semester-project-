#include <stdio.h>

int main ()
{
    int array[3]={2,3,4};
    int i,max,max_2;
    /* for (int i=0;i<3;i++)
   {
        printf("Enter element - %d:   ",i+1);
        scanf("%d",&array[i]);
    }*/
 max=array[0];
 max_2=0;
 for ( i=0;i<3;i++)
   {
       if (array[i]>max)
       {
           max_2=max;
           max=array[i];
       }
       else if (array[i]>max_2 && array[i]<max)
       {
           max_2=array[i];
       }
   }
printf("2nd Max : %d\n",max_2);
printf("max: %d",max);



    }
