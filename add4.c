//with aruguement with return type
#include <stdio.h>
int add(int a,int b);
int main()
{
int s,a,b;
s=add(a,b);
printf("%d",s);
}
int add(int a,int b)
{
printf("Enter a and b\n");
scanf("%d%d",&a,&b);
return a+b;
}

