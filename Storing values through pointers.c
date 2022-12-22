#include <stdio.h>
int main()
{
	int a,b;
	int *d=&a;
	int *e=&b;
	printf("Enter two numbers\n");
	scanf("%d%d",d,e);
	printf("The values are %d and %d",*d,*e);//*d=a and *e=b
	return 0;
}
