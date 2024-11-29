//WITH RETURN TYPE, WITHOUT ARGUMENT
#include <stdio.h>
int add();
int main()
{
int a,b,s;
s=add();
printf("%d",s);
}
int add()
{
int a,b;
printf("Enter a and b\n");
scanf("%d%d",&a,&b);
return a+b;
}
