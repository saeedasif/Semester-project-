#include <stdio.h>
int max(int,int);
void min(int , int );
int main()
{
 int a , b,c;
 printf("Enter two numbers     :");
 scanf("%d      %d",&a,&b);
 c=max(a,b);
 printf("The maximum number is %d  \n",c);
min (a,b);


}
int max(int a,int b){
int c;
c=a>b?a:b;
return c;




}
void min(int a , int b ){

int c ;

c=a<b?a:b;
printf("The Minimum number is %d",c);


}
