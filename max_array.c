#include <stdio.h>
int max(int a[],int n);
int main()
{
int n;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Fill the elements\n");
int i,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int R;
R=max(a,n);
printf("%d is the greatest",R);
}

int max(int a[],int n)
{
int i,maxi;
maxi=a[0];
for(i=1;i<n;i++)
{
if(a[i]>maxi)
maxi=a[i];
}
return maxi;

}

