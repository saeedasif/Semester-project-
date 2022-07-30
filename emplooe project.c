#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
void add_emp();
void display_emp();
void search_emp();
void display_50();

struct Employee{
char employ_id[20];
char first_name[20];
char last_name[20];
char gender[10];
float salary;
int  age;

};
int main ()
{
    int ch;
    while (1)
    {
        printf("\nEnter 1 to add employee detail\n");
        printf("Enter 2 to display all employee detail\n");
        printf("Enter 3 to search the employee with First Name\n");
        printf("Enter 4 to display the total employee with age 50+\n");
        printf("Enter 5 to Exit\n");
        printf("Enter your choice :  ");
        ch=getche();
        printf("\n");

    if (ch=='1')
        add_emp();
    else if (ch=='2')
        display_emp();
    else if (ch=='3')
        search_emp();
    else if (ch=='4')
        display_50();
    else if (ch=='5')
        exit(1);
    else
        printf("Invalid Operation !!!");
}
}
void add_emp()
{
  struct Employee b[2];
  int i;
  printf("Enter Employee Details :  ");
  for (i=0;i<2;i++)
  {
      printf("\nEnter ID of Empoloyee : ");
      gets(b[i].employ_id);
      printf("Enter First Name :   ");
      gets(b[i].first_name);
      printf("Enter Last Name :  ");
      gets(b[i].last_name);
      printf("Enter your gender :  ");
      gets(b[i].gender);
      printf("Enter your age :   ");
      scanf("%d",&b[i].age);
      printf("Enter your sallary :  ");
      scanf("%d",&b[i].salary);
      fflush(stdin);
  }
  FILE * fp;
  fp=fopen("saeed.txt","w");
  for (i=0;i<2;i++)
  {
      fprintf(fp," %s %s %s %s %d %f \n",b[i].employ_id,b[i].first_name,b[i].last_name,b[i].gender,b[i].age,b[i].salary);
  }
  fclose(fp);
}
void display_emp(){
struct Employee b[2];
int i;
FILE * fp;
fp=fopen("saeed.txt","r");
for (i=0;i<2;i++)
{
    fscanf(fp," %s %s %s %s %d %f \n",b[i].employ_id,b[i].first_name,b[i].last_name,b[i].gender,&b[i].age,&b[i].salary);
}
fclose(fp);
for (i=0;i<2;i++){
printf(" %s %s %s %s %d %f \n",b[i].employ_id,b[i].first_name,b[i].last_name,b[i].gender,b[i].age,b[i].salary);
}
}
void search_emp()
{
struct Employee b[2];
char your_name[30];
int result,i,count=0, flag=0;
FILE * fp;
fp=fopen("saeed.txt","r");
for (i=0;i<2;i++)
{
    fscanf(fp," %s %s %s %s %d %f \n",b[i].employ_id,b[i].first_name,b[i].last_name,b[i].gender,&b[i].age,&b[i].salary);
}
fclose(fp);
printf("Enter your Name :  ");
gets(your_name);
for (i=0;i<2;i++)
{
    result=strcmp(b[i].first_name,your_name);
    if (result==0)
        flag++;

}
    if (flag==0)
    {
        printf("%s is not available ",your_name);
    }
    else
           printf("%s is available",your_name);

}
void display_50()
{
struct Employee b[2];
int i,count=0;
FILE * fp;
fp=fopen("saeed.txt","r");
for (i=0;i<2;i++)
{
    fscanf(fp," %s %s %s %s %d %f \n",b[i].employ_id,b[i].first_name,b[i].last_name,b[i].gender,&b[i].age,&b[i].salary);
}
fclose(fp);
for (i=0;i<2;i++)
{
    if (b[i].age>50)
        count++;
}
printf("The number of employee having age 50+ are : %d",count);
}
