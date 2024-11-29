#include<stdio.h>
main()
{
float height;
printf("enter the height of the person:");
scanf("%f",&height);
if (height > 160){
printf("the person is tall");
}else if(height < 130){
printf("the person is short");
}else
{printf("the person is average in height");
}
}
