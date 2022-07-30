#include <stdio.h>
#include <string.h>
int main ()
{
    FILE *fp;
    char str[80];
    fp=fopen("POEM.TXT","r");
    if (fp==NULL)
    {
        puts("Source file cannot found ");
        exit(1);
    }
    while (fgets(str,79,fp)!=NULL)
    {
        printf("%s",str);
        printf("\n");
        fclose(fp);
    }
    return 0;
}

