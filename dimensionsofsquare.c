#include <stdio.h>
int area();
int perimeter();
int main()
{
area();
perimeter();
}
int area()
{
int a,A;
printf("Enter the side length of the square\n");
scanf("%d",&a);
A=a*a;
printf("the area of the square is %d\n",A);
}
int perimeter()
{
int a,P;
printf("Enter the side length of the square\n");
scanf("%d",&a);
P=4*a;
printf("the area of the square is %d",P);
}
