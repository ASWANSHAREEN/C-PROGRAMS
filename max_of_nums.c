#include <stdio.h>
int max(int a,int b);
int main()

{
int a,b;
max(a,b);
}
int max(int a,int b)
{
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
if(a>b)
printf("The max of these numbers is %d",a);
else
printf("The max of these numbers is %d",b);
}
