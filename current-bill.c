#include <stdio.h>
int main()
{
int units;
float bill,price;
printf("Enter the no. of units of current consumed :");
scanf("%d",&units);
if (units<=50)
{
price=units*0.5;
bill=price*0.2+price;
printf("%f",bill);
}
else if(units>50&&units<=150)
{
price=50*0.5+0.75*(units-50);
bill=price*0.2+price;
printf("%f",bill);
}
else if(units>150&&units<=250)
{price=50*0.5+0.75*100+(units-150)*1.2;
bill=price*0.2+price;
printf("%f",bill);}
else if(units>250)
{price=50*0.5+0.75*100+100*1.2+(units-250)*1.5;
bill=price*0.2+price;
printf("%f",bill);}
else
{printf("Sorry invaild input");
}}

