#include <stdio.h>
void main()
{
int num1,num2,result,i;
printf("Enter the lowest limit :");
scanf("%d",&num1);
printf("Enter the highest limit :");
scanf("%d",&num2);
for(i=num1+1;i<num2;i++)
{
result = i % 2;
if(result != 0)
printf("\n%d",i);
else
continue;
}
}
