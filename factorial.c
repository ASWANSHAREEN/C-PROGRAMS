#include <stdio.h>
int fact(int n);
int main()
{
int R,n;
printf("enter n\n");
scanf("%d",&n);
R=fact(n);
printf("%d",R);
}

int fact(int n)
{

if(n==1)
{return 1;}
else
{return n*fact(n-1);}
}

