#include <stdio.h>
#define max_array 10
int main()
{
  int j[max_array];
  int i,n,sum=0;
  printf("Enter the number of element in array:  ");
  scanf("%d",&n);
  printf("Enter %d member of array  :   ",n);
  for (i=0;i<n;i++)
  {
      printf("\nEnter the element - %d of array:  ",i+1);
      scanf("%d",&j[i]);
  }
 printf("The sum of array is:     ");
 for (i=0;i<n;i++)
 {
     sum=sum+j[i];
 }

  printf("%d",sum);
}
