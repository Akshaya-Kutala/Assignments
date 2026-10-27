#include<stdio.h>
int main ()
{
int age;
int monthly_income;
int credit_score;
printf("Enter the age:");
scanf("%d",&age);
printf("Enter the monthly_income:");
scanf("%d",&monthly_income);
printf("Enter the credit_score:");
scanf("%d",&credit_score);  
if(age>=21 || age<=60 && monthly_income>=25000 || credit_score>=700)
{
   printf("\n Loan is approved");
   }
else
{
 printf("\n Loan is rejected");
 }
 printf("\nend of program");
 return 0;
 }
    