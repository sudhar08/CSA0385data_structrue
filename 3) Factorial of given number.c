#include<stdio.h>
int main()
{
	int n,i,count=1;
	printf("enter number:");
	scanf("%d",&n);
	if (n<0)
	{
		printf("not applicable");
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			count*=i;
			
		}
		printf("Factorial of given number is:%d",count);
}
return 0;
}
