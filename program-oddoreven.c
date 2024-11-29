#include<stdio.h>
main()
{
int Number;
printf("Enter any positive integer :");
scanf("%d",&Number);
int Reminder;
Reminder=Number%2;
if(Reminder==1)
{
printf("The entered number is an odd number");
}
else
{
printf("The entered number is an even number");
}
}

