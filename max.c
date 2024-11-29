#include <stdio.h>
int max();
int main()
{
max();
}
int max()
{
int a,b,c;
printf("Enter any 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
if (a>c)
printf("%d is the Maximum amongest all",a);
else
printf("%d is the Maximum amongest all",c);
}
else if (b>c)
printf("%d is the Maximum amongest all",b);
else 
printf("%d is the Maximum amongest all",c);
}


