//WITH ARGUMENT, WITHOUT RETURN TYPE
#include <stdio.h>
int add(int a,int b);
int main()
{
int a,b;
add(a,b);
}
int add(int a,int b)
{
int s;
printf("Enter a and b\n");
scanf("%d%d",&a,&b);
s=a+b;
printf("%d",s);
}
