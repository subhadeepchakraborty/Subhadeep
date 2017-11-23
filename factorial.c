#include<stdio.h>
int main()
{
	int c,n,fact=1;
   	printf("Enter a nuber to calculate its factorial\n");
	scanf("%d",&n);

	for (c=1;c<=n;c++)
	{
		fact=fact *c;
	}

	printf("factorial of %d=%d\n",n,fact);
	return 0;
}
