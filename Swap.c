#include<stdio.h>

void main()
{
int x,y,temp;

printf("\nEnter the values of x and y:");
scanf("%d%d",&x,&y);

printf("\nBefore Swapping:\n x=%d \n y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("\nAfter Swapping:\nx=%d \n y=%d",x,y );

}
