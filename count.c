#include<stdio.h>
void main()
{
int num,count=0;
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("The number of digits is  : %d ",count);
}
