#include <stdio.h>
int main ()
{
    char ch[50];
    printf("Enter a string :    ");
    gets(ch);
    int i,alphabet,digit,others;
    i=alphabet=digit=others=0;
    while (ch[i]!='\0')
    {
        if ((ch[i]>='a' && ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z'))
            alphabet++;
        else if (ch[i]>='0' && ch[i]<='9')
            digit++;
        else
            others++;
        i++;
    }


printf("No of abphabet :  %d \n",alphabet);
printf("No of digit :  %d \n",digit);
printf("No of spaces:  %d \n",others);

}
