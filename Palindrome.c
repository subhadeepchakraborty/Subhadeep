#include<stdio.h>
int main()
{
 int a,rev=0;
 int temp;
     
    printf("Enter a number to be checked it is palindrome or not\n");
    scanf("%d",&a);

     temp=a;
       
        while(a!=0)
       {
         rev=rev*10;
         rev=rev+a%10;
         a=a/10;
       }
          
        if(temp==rev)
        {
          printf("It is a Palindrome\n");
        }
        else
          printf("It is not a Palindrome\n");
        

      
        }

