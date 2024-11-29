#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2!=0)
{printf("%d\n",i);
sum=sum+i;}
else if(i&2==0)
printf(" ");
}
printf("%d",sum);
}

