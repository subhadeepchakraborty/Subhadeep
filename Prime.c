#include<stdio.h>
int main()
{
 int n,i,r;
 int m=0;
     
    printf("Enter a number to be checked it is Prime or not\n");
    scanf("%d",&n);

     if(n==1)
     {
       printf("Not Prime\n");
     }
       for (i=2;i<=n/2;i++)
      {
        if (n%i==0)
      {
        printf("Number is not a prime\n");
        m=1;
        break;
      }
      }
       if (m==0)
        {
          printf("Number is prime\n");
}
}
