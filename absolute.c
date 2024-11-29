#include <stdio.h>
int absolute(int x);
int main()
{
int x;
absolute(x);
}
int absolute(int x)
{
int y;
printf("Enter the value of x\n");
scanf("%d",&x);
if (x<0)
{y=(-1)*x;
printf("The absolute value of x is %d\n",y);}
else if (x>0)
printf("The absolute value of x is %d\n",x);
else
printf("%d",x);
}

