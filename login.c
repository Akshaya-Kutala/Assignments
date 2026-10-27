#include<stdio.h>
int main ()
{
int Id;
int password;
printf("Enter the Id");
scanf("%d",&Id);
printf("Enter the password");
scanf("%d",&password);
if (Id !=101)
   printf("\nUser not found");
 else 
   if(password==4321)
     printf("\n Login successful");
 else 
     printf("\n incorrect password");
 printf("\nend of program");  
   return 0;
   }
     
   


    