#include <stdio.h>
int main()
{
int n,i=1,fact=1;
float R=0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
fact=i*fact;
R=R+(i/fact);
i++;
}
printf("%f",R);
}
