#include <stdio.h >
int main ()
{
	int totalRowNo , row , space , symbol;
	printf("Enter the no of rows   :");
	scanf("%d",&totalRowNo );
	for (row = 1; row <= totalRowNo; row++){
		
	for (space = 1 ;space <=(totalRowNo - row ) ; space++)
	printf(" ");
	for (symbol =1 ; symbol <=(2 *row)-1;symbol++)
	printf("X");
	printf("\n");
}
return 0;
}
