#include<stdio.h>
void main()
{
int a=4,b=3,c=2;
if(a>b&&a>c)
{
printf("a is maximum");
printf("\n");
}
else if (b>a&&b>c)
{
printf("b is maxiumum");
}
if(c<a&&c<b)
{
printf("c is minimum");
}
return;
}
