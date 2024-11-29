#include <stdio.h>
int square(int n);
int main()
{
int n,R;
printf("Which number you want to find the square of?\n");
scanf("%d",&n);
R=square(n);
printf("The square of %d is: %d",n,R);
}

int square(int n)
{
return(n*n);
}
