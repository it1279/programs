#include<stdio.h>
void main()
{
int a=5,b=3;
float c;
int choice;
printf("enter choice");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("sum of two numbers");
c=a+b;
printf("%f",c);
break;
case 2:printf("subtraction of two numbers");
c=a-b;
printf("%f",c);
break;
case 3:printf("multiplication of two numbers");
c=a*b;
printf("%f",c);
break;
case 4:printf("division of two numbers");
c=a/b;
printf("%f",c);
break;
case 5:printf("mod of two numbers");
c=a%b;
printf("%f",c);
break;
default:printf("enter the choice between 1 to 5");
break;
}
return;
}
