#include<stdio.h>

int main()
{
    int a,m,o;
    printf("enter order amount and membership:");//1 for premium and 0 for regular
    scanf("%d%d",&a,&m); 
    if(a>=500&&m==1)
    printf("The payable amount is %d",o=a-a*10/100);
    else
    printf("The payable amount is %d",o=a-50);
}    