#include<stdio.h>
int main()
{
 int a,r,x,y;
 int sum=0;
     
    printf("Enter a number to be checked it is Armstrong or not\n");
    scanf("%d",&a);

    y=a;
        while(a!=0)
        {
         r=a%10;
         a=a/10;
         x=r*r*r;
         sum=sum + x;
        }
         
         if(sum==y)
         {
           printf("Entered Number is Armstrong Number\n");
         }
         else
             printf("Entered Number is not a Armstrong Number\n ");
}         

            
