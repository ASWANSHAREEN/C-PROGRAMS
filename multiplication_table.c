#include <stdio.h>
int main()
{
int n,i,a;
printf("Which table you want to print ?\nEnter here\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
a=n*i;
printf("%dX%d=%d\n",n,i,a);
}
}
