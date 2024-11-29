#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
sum=sum+i;
}
printf("The sum of numbers is %d\n",sum);
}
