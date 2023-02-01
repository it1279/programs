#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int max=a[0],min=a[0],sum=0,i;
float average;
for(i=0;i<5;i++)
{
if(a[i]>max)
max=a[i];
}
printf("max is %d\n",max);
for(i=1;i<5;i++)
{
if(a[i]<min)
min=a[i];
}
printf("min is %d\n",min);
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("sum is %d\n",sum);
{
average=sum/5;
printf("average is %f",average);
}
return;
}

