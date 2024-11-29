#include <stdio.h>
int main()
{
int n=2,i,a;
printf("Enter untill when you wanna print the numbers");
scanf("%d",&a);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
n++;
if(n==a)
return 0;
}
}


