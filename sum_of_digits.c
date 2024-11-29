#include <stdio.h>
int ditsum();
int main()
{
ditsum();
}

int ditsum()
{
int num,d,sum=0;
printf("Enter the number of your choice: ");
scanf("%d",&num);
while(num%10!=0)
{
d=num%10;
printf("%d\t", d);
sum=sum+d;
num=num/10;
}
printf("\n");
printf("The sum of digits is %d\n",sum);
}
