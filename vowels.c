#include<stdio.h>
int main ()
{
 char v;
 printf("Enter v value:");
 scanf("%c",&v);
 if(v=='a'|| v=='e' || v=='i' || v=='o' || v=='u' || v=='A'|| v=='E'|| v=='I' || v=='O' || v=='U')
 printf("\n %c is vowel",v);
 else 
   printf("\n %c is consonant",v);
printf("\nend of program");   
 return 0 ;
 }