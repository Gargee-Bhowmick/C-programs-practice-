#include <stdio.h>
int main()
{
	int a,b,c,g,h;
	int *d=&a;
	int *e=&b;
	int *f=&c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",d,e,f);
	g=(*d>=*e)?((*d>=*f)?*d:*f):((*e>=*f)?*e:*f);
	h=(*d<=*e)?((*d<=*f)?*d:*f):((*e<=*f)?*e:*f);
	printf("The maximum value is %d and the minimum value is %d",g,h);
	return 0;
}
