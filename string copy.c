#include <stdio.h>
#include <string.h>
int main ()
{
    char str[20],ptr[30];
    printf("%s\n",str);
    printf("Enter Your Name :  ");
    gets(str);
    strcpy(ptr,str);
    printf("The copy of %s = %s",str,ptr);


}

