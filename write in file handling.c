#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    FILE *fp;
    char str[1000];
    fp=fopen("G:/poem.txt","w");
    if (fp==NULL)
    {
        puts("Cannot open source file");
        exit(1);
    }
    printf("\n\t\t\t\tEnter few lines  :  ");
    printf("\n\n");
    while (strlen(gets(str))>0)
    {
        fputs(str,fp);
        fputs("\n",fp);
    }
fclose(fp);
}
