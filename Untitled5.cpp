#include <stdio.h>
int main ()
{
	int i , j ,space  ;
	
		for (i = 1 ; i <=9; i=i+2)
	{
		for (space= 1; space <= i-j; space++)
		printf(" ");
		for (j=1 ; j<=i ; j++)
		{ 
		    printf(" *");
		}
			printf("\n");
	}

	

	return 0;
}
