#include <stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the values of m and n\n");
scanf("%d%d",&m,&n);
int a[m][n];
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
{
printf("a[%d][%d]-",i,j);
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
printf("%d\t",a[i][j]);
 }
printf("\n");
}


for(i=0;i<m;i++){
int sum1=0;
 for(j=0;j<n;j++)
{sum1=sum1+a[i][j];}
printf("Sum of %d row elements %d\n",i,sum1);}

for(j=0;j<n;j++){
int sum2=0;
 for(i=0;i<m;i++)
{sum2=sum2+a[i][j];}
printf("Sum of %d column elements %d\n",j,sum2);}
}


