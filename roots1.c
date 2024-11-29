#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c,roots;
float r;
printf("The quadratic equation is in the form ax^2+bx+c=0");
printf("Enter the values of a, b and c");
scanf("%d%d%d",&a,&b,&c);
printf("1-first root, 2-second root");
scanf("%d",&roots);
switch (roots)
{
case 1:
r=(-b+sqrt(b*b-4*a*c))/(2*a);
if ((b*b-4*a*c)>0)
printf("One root of the quadratic equation is %f",r);
else ((b*b-4*a*c)<0)
printf("the descriminant is negative");
break;
case 2:
r=(-b-sqrt(b*b-4*a*c))/(2*a);
if ((b*b-4*a*c)>0)
printf("Second root of the quadratic equation is %f",r);
else ((b*b-4*a*c)<0)
printf("the descriminant is negative");
break;
default:
printf("The input is invalid");
}}
	
