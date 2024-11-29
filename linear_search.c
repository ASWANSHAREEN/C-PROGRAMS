#include <stdio.h>
int main()
{
int n,a[30],key,x;
printf("Enter the value of n\n");
scanf("%d",&n);

printf("Enter the array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Which element do you want to find\n");
scanf("%d",&key);
for(int i=0;i<n;i++)
{
if(a[i]==key)
x=1;
else
x=0;
}
if(x==1)
printf("Element is found\n");
else
printf("Element is not found\n");
}
