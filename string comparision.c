#include <stdio.h>
#include <string.h>
int main ()
{
    char name[20]={" Saeed"},name1[50]={"saeed"};
    strupr(name);
    printf("upper case :%s\n",name);
    strlwr(name);
    printf("lower case :%s\n",name);

    int result;
    strcmpi(name1,name);//comparision of the two string
    if (result == 0)
        printf("Match Found");
    else
        printf("Match not Found");

}
