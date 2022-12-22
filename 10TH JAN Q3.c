#include <stdio.h>
void fibo(int n)
{
	int a=0,b=1,c=0,i;
	printf("The fibonacci series till the %dth term is :\n0 1 ",n);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}
int main()
{
	int n;
	printf("Enter the number of term till which you want to display the fibonacci series\n");
	scanf("%d",&n);
	fibo(n);
}
