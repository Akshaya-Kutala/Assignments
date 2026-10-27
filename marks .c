#include<stdio.h>
int main ()
{
int mark;
printf("Enter the marks");
scanf("%d",&mark);
if(mark<0 || mark>100)
 printf("invalid marks");
 else if(mark>=90 && mark<=100)
 printf("\n Grade:O");
 else if(mark>=80 && mark<=89)
  printf("\n Grade:A+");
 else if(mark>=70 && mark<=79)
  printf("\n Grade:A");
 else if(mark>=60 && mark<=69)
  printf("\n Grade:B"); 
  else if(mark>=50 && mark<=59)
  printf("\n Grade:C"); 
  else 
      printf("\n fail");
   printf("\n end of program");
   return 0;
  }    