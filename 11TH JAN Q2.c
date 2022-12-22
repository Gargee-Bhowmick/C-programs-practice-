#include <stdio.h>
	float average(int a,int b,int *c, int *d)
	{
		float e=(a+b)/2;
		*c=(a>b)?a:b;
		*d=(a<b)?a:b;
		return e;
	}
	int main()
	{   int a,b,c,d;
	    float e;
		printf("Enter two integer values whose average max and min is to be calculated\n");
		scanf("%d%d",&a,&b);
		e=average(a,b,&c,&d);
		printf("The two numbers are %d and %d where %d is the largest and %d is the smallest and their average is %f",a,b,c,d,e);
		return 0;
	}
