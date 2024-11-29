//Adding of numbers WITHOUT ARGUMENT, WITHOUT RETURN TYPE
#include <stdio.h>
int add();
int main()
{
add();
}
int add()
{
int a,b,s;
printf("Enter two numbers a and b\n");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d",s);
}
