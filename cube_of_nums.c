#include <stdio.h>
int main()
{
int n,i,a;
printf("Enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=i*i*i;
printf("The cube of %d is %d\n",i,a);
}
}
