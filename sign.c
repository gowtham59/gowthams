#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",a);
if(a>0)
{
printf("%d is positive");
}
else if(a<0)
{
printf("%d is negative");
}
else
{
printf("Zero");
}
getch();
}
