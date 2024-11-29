#include <stdio.h>
void main()
{
char input;
printf("please enter any character");
scanf("%c",&input);
if(input>='a'&&input<='z'||input>='A'&&input<='Z')
{
printf("the input character is an alphabet");
}
else
{
printf("the input character is not an alphabet");
}}
