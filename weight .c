#include<stdio.h>
int main ()
{
float weight,height,bmi;
printf("Enter weight in kgs:");
scanf("%f",&weight);
printf("Enter height in meters:");
scanf("%f",&height);
bmi=weight/height*height;
printf("bmi=%f",bmi);
if(bmi<18)
printf("\nUnderweight");
else if( bmi<25)
printf("\nNormal");
else if(bmi<30)
printf("\nOverweight");
else
printf("\nObses");
printf("end of program");
return 0;
}
 
    