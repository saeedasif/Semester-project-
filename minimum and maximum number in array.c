#include <stdio.h>
int main ()
{
    int array[3];
    int i,max,min;
    for (i=0;i<3;i++)
    {
        printf("Enter element - %d:   ",i+1);
        scanf("%d",&array[i]);
    }
    max = max_2 = MINarray[0];
    for (i=0;i<3;i++)
    {
        if (max<array[i])
            max=array[i];
    }
     min = array[0];
    for (i=0;i<3;i++)
    {
        if (min>array[i])
            min=array[i];
    }
    printf("Max : %d\n",max);
    printf("Min : %d",min);
}
