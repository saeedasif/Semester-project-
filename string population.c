#include <stdio.h>
int main ()
{
    char name[20]={" Saeed"},name1[50]={"saad"},ch[50];
    strcat(name1,name);//concatination
    printf("%s\n%s",name,name1);
    strcpy(ch,name);
    printf("\n%s",name);
}
