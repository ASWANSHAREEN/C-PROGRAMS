#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the numbers\n");
for(i=0;i<=10;i++)
{printf("num - %d:",i);
scanf("%d",&n);
sum=sum+n;}
printf("%d",sum);
}
