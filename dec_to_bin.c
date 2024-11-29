#include <stdio.h>
int dec_to_bin();
int main()
{
dec_to_bin();
}

int dec_to_bin()
{
int a,b,n,i=0;
printf("Enter n\n");
scanf("%d",&n);

int ans[32];
while(n/2!=0)
{
b=n%2;
ans[i]=b;
n=n/2;
i++;

}
printf("1");
for(int j=i-1;j>=0;j--)
printf("%d",ans[j]);
}

