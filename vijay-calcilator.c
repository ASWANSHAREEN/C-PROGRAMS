#include<stdio.h>
int main(){
int a,b,input,ans;
printf("enter any number: ");
scanf("%d",&a);
printf("enter another number ");
scanf("%d",&b);
printf("1-add,2-sub,3-divide,4-multiply \n");
scanf("%d",&input);
switch(input)
{
case 1: ans=a+b;
printf("%d",ans);
break;
case 2: ans=a-b;
printf("%d",ans);
break;
case 3:ans=a/b;
printf("%d",ans);
break;
case 4:ans=a*b;
printf("%d",ans);
break;
default:
printf("sorry the operations is not performable");
}
}
