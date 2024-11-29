#include <stdio.h>
int show(int marks[]);
int main()
{
int marks[3]={12,20,30};
show(marks);
}

int show(int marks[])
{
int i;
for(i=0;i<3;i++)
printf("%d\n",marks[i]);
}

