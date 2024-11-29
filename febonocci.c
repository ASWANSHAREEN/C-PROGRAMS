#include <stdio.h>
int main()
{
int n,i=1,r=0,R;
printf("n is the number of terms");
printf("Enter the value of n ");
scanf("%d",&n);
n=n-2;
while(n)
{
R=i+r;
r=i;
i=R;
n=n-1;
}
printf("the answer is %d",R);
}
