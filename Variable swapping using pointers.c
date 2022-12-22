#include <stdio.h>
int main()
{
	int a,b;
	int *c=&a;
	int *d=&b;
	int t;
	printf("Enter the two values\n");
	scanf("%d%d",c,d);
	printf("\nThe variables are a=%d and b=%d and the memory locations of the variables in the decimal format are a=%d amd b=%d",*c,*d,c,d);
	t=*c;
	*c=*d;
	*d=t;
	printf("\nThe swapped variables are a=%d and b=%d and their respective memory locations in decimal format are %d and %d ",a,b,c,d);
	return 0;
}
