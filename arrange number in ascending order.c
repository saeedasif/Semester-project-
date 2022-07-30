#include <stdio.h>
int main()
{
	int number[50];
	int a,n,i,j;
	printf("Enter the number of digits :   ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
    {printf("Enter element - %d:   ",i+1);
	  scanf("%d",&number[i]);
    }
	  for (i=0;i<n;i++)
	  {
	  	for (j=i+1;j<n;j++)
	  	{
	  		if (number[i]>number[j])
	  		{
	  			a=number[i];
	  			number[i]=number[j];
	  			number[j]=a;
			  }
		  }
	  }
	  printf("Number in ascending order is :");
	  printf("\n");
	  for (i=0;i<n;i++)
	  {
	  	printf("%d\n",number[i]);
	  }
}
