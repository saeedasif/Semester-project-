#include <stdio.h >
int main ()
{
	int i , j , k , l;
	printf("Enter the no of rows   :");
	scanf("%d",&i );
	for (j = 1; j <= i; j++){
		
	for (k = 1 ;k <=(i - j ) ; k++)
	printf(" ");
	for (l =1 ; l <=(2 *j)-1;l++)
	printf("*");
	printf("\n");
}
return 0;
}
