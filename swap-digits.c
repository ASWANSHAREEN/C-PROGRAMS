#include <stdio.h>
int main()
{
int input,lastdigit,firstdigit,temp;
printf("Enter any three digit integer:\n ");
scanf("%d",&input);
printf("Your input is %d\n",input);
lastdigit=input%10;
firstdigit=input/100;
temp=lastdigit;
lastdigit=firstdigit;
firstdigit=temp;
}

