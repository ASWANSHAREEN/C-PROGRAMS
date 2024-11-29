#include <stdio.h>
int main()
{
int n,r=0,i=1;
printf("Enter the value of n");
scanf("%d",&n);
while(i<=n)
{
r=r+i;
i++;
}
printf("the sum of the numbers is %d",r);
}
