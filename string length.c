#include <stdio.h>
int main ()
{
    char str[20]={"saeed"};
    int length;
    printf("%s\n",str);
    printf("Enter Your Name :  ");
    gets(str);
    length=strlen(str);
    printf("The length of %s = %d",str,length);

}
