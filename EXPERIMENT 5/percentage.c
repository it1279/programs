#include<stdio.h>
void main()
{
int perc;
printf("enter perc");
scanf("%d",&perc);
if(perc>=75)
printf("toppers");
if(perc>=50)
printf("average");
if(perc<=50)
printf("not qualified");
return;
}
