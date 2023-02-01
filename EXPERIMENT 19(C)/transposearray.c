#include<stdio.h>
void transpose(int [2][2]);
int main(){
int a[2][2]={1,2,3,4};
transpose(a);
return 0;
}
void transpose(int a[2][2])
{
int i,j;
int c[2][2];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf(" %5d",a[i][j]);
}
printf("\n");
}
printf("transpose of matrices");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[j][i];
printf("%5d",c[i][j]);
}
printf("\n");
}
return;
}
