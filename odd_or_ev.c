#include <stdio.h>
int evenOdd(int n);
int main()
{
int n;
evenOdd(n);
}
int evenOdd(int n)
{
printf("Enter the value of n\n");
scanf("%d",&n);
if (n%2==0)
printf("The number is even");
else
printf("The number is odd");
}
