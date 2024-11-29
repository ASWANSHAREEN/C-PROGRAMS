#include <stdio.h>
int main()
{
int a,b,input,s;
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
printf("1-add,2-sub,3-multiply,4-divide \n");
scanf("%d",&input);
switch(input)
{
case 1:
s=a+b;
printf("%d",s);
break;
case 2:
if (a>b)
s=a-b;
else
s=b-a;
printf("%d",s);
break;
case 3:
s=a*b;
printf("%d",s);
break;
case 4:
s=a/b;
printf("%d",s);
break;
}}
