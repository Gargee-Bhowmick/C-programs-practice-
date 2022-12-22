#include <stdio.h>
int fact (int a)
{
	int i,p=1;
	for (i=1;i<=a;i++)
	p=p*i;
	return p;
}
int main()
{
	int n,i;
	float sum=0;
	printf("Enter the number till which you want to show the sum of series\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+(1/(fact(i)*1.0));
	printf("The sum of the following series is %f",sum);
	return 0;
}
