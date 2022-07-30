//including libraries
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//including funtion prototype
void add_books();
void search_book();
void display_book();
void delete_book();
void update_book();
void issue_book();
//declaring the structure
struct book{
char book_name[50];
char ISBN_No[20];
char Aurthor_Name[20];
char Edition[10];
int serial_No;
int reserved;
};
int main ()
{
    printf("\t\t\t\t\t|LIBRARY MANAGMENT SYSTEM|\n");
    printf("\t\t\t\t\t==========================\n\n");
    // declaring variable for choice
    char choice;
    // Entering the while loop
    while (1)
    {
        printf("===============================\n\n");
        //Adding the menu
        printf("Enter A and a to Add book\t\n");
        printf("Enter I and i to Issue book\t\n");
        printf("Enter D and d to Delete book\t\n");
        printf("Enter U and u to Update book\t\n");
        printf("Enter O and o to Display book\t\n");
        printf("Enter S and s to Search book\t\n");
        printf("Enter Q and q to Quit book\t\n");
        printf("\n===============================\n\n");
        //Taking the choice
        printf("Enter your choice: ");
        choice= getche();
        printf("\n\n");
        printf("===============================\n\n");
        //matching the choice with the help of if-else-if
        if (choice=='a'|| choice=='A')
            add_books();
        else if  (choice=='S'|| choice=='s')
             search_book();
        else if  (choice=='u'|| choice=='U')
            update_book();
        else if  (choice=='i'|| choice=='i')
              issue_book();
        else if  (choice=='q'|| choice=='Q')
            exit(1);
        else if (choice=='d'|| choice=='D')
            delete_book();
        else if (choice == 'o'|| choice=='O')
            display_book();
        else
        {
            printf("====================\n\n");
            printf("Invalid Input\n\n");
            printf("====================\n\n");
    }
    }
    //End of while loop
}
//Entering the function add books
void add_books()
{
    //declaring structure array variable and simple variables
   struct book b[5];
   int i;
   //starting of for loop
   for (i=0;i<=4;i++)
   {
       printf("===============================\n\n");
       //Taking input from user to add books
       printf("Enter Book-%d Name:\t\t",i+1);
       gets(b[i].book_name);
       printf("Enter Book-%d Author Name :\t",i+1);
       gets(b[i].Aurthor_Name);
       printf("Enter Book-%d ISBN No:\t\t",i+1);
       gets(b[i].ISBN_No);
       printf("Enter Book-%d Edition:\t\t",i+1);
       gets(b[i].Edition);
       printf("Enter Book-%d Serial Number:\t",i+1);
       scanf("%d",&b[i].serial_No);
       printf("Enter Book-%d reserved(0):\t",i+1);
       scanf("%d",&b[i].reserved);
       fflush(stdin);
       printf("\n===============================\n");
   }//End of for loop
   FILE *fp;//declaring the File pointer variable
   fp=fopen("G:/library.txt","w");//creating and opentin the file in write mode
//start of for loop
   for (i=0;i<5;i++)
   {
       //printing the data taken from the user and wirte in file.
       fprintf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,b[i].serial_No,b[i].reserved);
   }
   fclose(fp);//closing the file
}
//Entering the search function
void search_book()
{ //declaring variables
  struct book b[5];
  int i,result,flag=0;
  int choice;
  char your_book[15],ISBN_no[15],Author_name[15];

   FILE *fp;//declaring file pointer variable
   fp=fopen("G:/library.txt","r");//creating and opening file
// start of for loop
   for (i=0;i<=4;i++)

   {
       //fetching the data we write in the file
       fscanf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,&b[i].serial_No,&b[i].reserved);
   }
   //End of for loop
   fclose(fp);//closing file
   //declaring variables
   printf("BY WHICH METHOD YOU WANT TO SEARCH\n\n1.comparing ISBN NO \n2.Comparing Book Name\n3.Comparing Author Name   \n\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);
   fflush(stdin);
   if (choice==1)
    {printf("Enter ISBN Number:\t");
     gets(ISBN_no);
   //start of for loop

   for (i=0;i<5;i++)
   {
       //comparing your book from the data
       result=strcmp(b[i].ISBN_No,ISBN_no);
        if (result==0)//selection of result
   {
       flag=1;
       //printing of result
       printf("==========================\n\n");
       printf("%s is available!!!!!!\n\n",b[i].book_name);
       printf("==========================\n\n");
       break;
   }
   }
    }
   else if (choice==2)
   {
       printf("Enter you book Name:\t");
       gets(your_book);

    for (i=0;i<5;i++)
   {
       //comparing your book from the data
       result=strcmp(b[i].book_name,your_book);
        if (result==0)//selection of result
   {
       flag=1;
       //printing of result
       printf("==========================\n\n");
       printf("%s is available!!!!!!\n\n",your_book);
       printf("==========================\n\n");

       break;
   }}}
//End of for loop
 else if (choice==3)
 {
     printf("Enter your Author Name:\t");
     gets(Author_name);

    for (i=0;i<5;i++)
   {
       //comparing your book from the data
       result=strcmp(b[i].Aurthor_Name,Author_name);
        if (result==0)//selection of result
   {
       flag=1;
       //printing of result
       printf("==========================\n\n");
       printf("%s is available!!!!!!\n\n",b[i].book_name);
       printf("==========================\n\n");

       break;
   }}}
   else
    printf("Invalid Input\n");


   //checking the selecition

   if (flag==0)
    {
    printf("==========================\n\n");
    printf("%s is not available!!!!!!\n\n",your_book);
    printf("==========================\n\n");
}
}
void display_book()//In Display function
{
    //declaring variables
    struct book b[5];
   int i;
   FILE *fp;//declaring file pointer
   fp=fopen("G:/library.txt","r");//creating and opening file in read mode
//start of for loop
   for (i=0;i<=4;i++)
   {
       // Fetching the data from the file
       fscanf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,&b[i].serial_No,&b[i].reserved);
   }
   // ending of the for loop
   fclose(fp);//closing file
   //printing the book details
   printf("\t\t\t\t\t|Book Details|\t\t\n");
   printf("\t\t\t\t\t==============\n\n");
   printf("|Book Name|   |ISBN No|     |Author Name|     |Edition|\t          |Serial No|\t     |Reserved|\n");
   printf("=================================================================================================\n");
   for (i=0;i<=4;i++)//start of the for loop
   {
       //printing of the details
       printf("%s\t\t%s\t\t%s\t\t%s\t\t\t%d\t\t%d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,b[i].serial_No,b[i].reserved);

   }
   printf("=================================================================================================\n\n");
}
void delete_book()//In delete nook function
{
    //declaring the variables
struct book b[5];
int i,result;
  FILE *fp;//declaring file pointer
   fp=fopen("G:/library.txt","r");//creating and opening the file in read mode


   for (i=0;i<=4;i++)//start of the for loop
   {
       //Fetching the data from the file
       fscanf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,&b[i].serial_No,&b[i].reserved);
   }
//End of the for loop
   fclose(fp);//Closing the file
    char your_book[15];//declaring variable
     printf("\tAvailable Books are:  \n\n");

   for (i=0;i<=4;i++)//start of the for loop
   {
       //printing the statement
       printf("\t|\t%s\t|\n",b[i].book_name);
   }//End of the for loop
   printf("\n\n");
   fclose(fp);//closing the file

   printf("Enter your book name:  ");
   gets(your_book);//input the book from the user

   fp=fopen("G:/library.txt","w");//opening the file in write
// start of the for loop
   for (i=0;i<=4;i++)
   {

//comparing your book with the data
   result = strcmp(b[i].book_name,your_book);
   if(result==0)//selection of the result
        continue;
   else
    fprintf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,b[i].serial_No,b[i].reserved);
   }//End of the for loop
   fclose(fp);//Closing the file


}
void update_book()//In update books function
{
    //declaring the variables
struct book b[5];
int i,result;
  FILE *fp;//declaring the file pointer
   fp=fopen("G:/library.txt","r");//opening the file in read mode
//start of the for loop
   for (i=0;i<=4;i++)
   {
       //fetching the data from the file
       fscanf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,&b[i].serial_No,&b[i].reserved);
   }//End of the for loop
   fclose(fp);//closing the file
    char old_book[15],new_book[15];//declaring the variable
    printf("\tAvailable Books are:  \n\n");
//start of the for loop
   for (i=0;i<=4;i++)
   {
       //printing of the data
       printf("\t|\t%s\t|\n",b[i].book_name);
   }//End of the for loop
   printf("\n\n");

//geting the input from the user
   printf("Enter your old book name:\t");
   gets(old_book);
     for (i=0;i<5;i++)//start of the for loop
   {//comparing the books
   result = strcmp(b[i].book_name,old_book);
   if(result==0)//selection structure
   {
       //input the book from the user
    printf("Enter New Book Name:\t\t");
    gets(new_book);
    strcpy(b[i].book_name,new_book);//comping the string in new book
   }//End of for loop
   }
   fp=fopen("G:/library.txt","w");//opening the file in write mode
   for(i=0;i<5;i++)//start of the for loop
   {
       //printing the data in file
       fprintf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,b[i].serial_No,b[i].reserved);
   }//End of for loop
   fclose(fp);//closing the file




}
void issue_book()//In issue book
{
    //declaring the variables
    struct book b[5];

        int i,result;
     FILE *fp;//declaring the file pointer
   fp=fopen("G:/library.txt","r");//opening the file in read mode

   for (i=0;i<=4;i++)//start of for loop
   {
       //Fetching the data from the file
       fscanf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,&b[i].serial_No,&b[i].reserved);
   }//End of the for loop
   fclose(fp);//closing the file
   printf("\tAvailable Books are:  \n\n");
     //start of the for loop
   for (i=0;i<=4;i++)
   {
       //printing the data of available books
       printf("\t|\t%s\t  |\n",b[i].book_name);
   }//End of the for loop
   printf("\n\n");

    char your_book[15];//declaring the variable and take the value from the user
   printf("Enter your book name:  ");
   gets(your_book);
    for(i=0;i<=4;i++)//start of the for loop
    {
        //comparing the books
        result=strcmp(b[i].book_name,your_book);


        if (result==0){//selection of the data
         printf("===========================\n\n");
         printf("You have issued book\n\n");
         printf("===========================\n\n");
        b[i].reserved=1;
        break;}
    }//End of for loop
    fp=fopen("G:/library.txt","w");//opening the file in write mode

     for(i=0;i<5;i++)//start of the for loop
   {
       //printing the data in file
       fprintf(fp,"%s %s %s %s %d %d\n",b[i].book_name,b[i].ISBN_No,b[i].Aurthor_Name,b[i].Edition,b[i].serial_No,b[i].reserved);
   }//End of for loop
   //closing the file

fclose(fp);
  }

