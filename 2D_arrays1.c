#include <stdio.h>
int main()
{
int i,j,a[2][3]={{1,2,3},{4,5,6}};
float f;
char c;
double d;
for(i=0;i<2;i++)
for(j=0;j<3;j++)
{
printf("a[%d][%d]-%d\n",i,j,a[i][j]);
}
printf("int %d\n",sizeof(i));
printf("array %d\n",sizeof(a[2][3]));
printf("float %d\n",sizeof(f));
printf("char %d\n",sizeof(c));
printf("double %d\n",sizeof(d));
}

