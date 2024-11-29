#include <stdio.h>
main()
{
int marks;
printf("Enter your average marks");
scanf("%d",&marks);
if(marks>=80)
{
printf("A Grade");
}
else if(marks>60)
{
printf("B Grade");
}
else if(marks<=60&&marks>40)
{
printf("C Grade");
}
else
{
printf("Pail!!");
}}
