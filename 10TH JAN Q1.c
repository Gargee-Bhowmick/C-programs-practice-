#include <stdio.h>
float average(float,float,float);
int main()
{
	float a,b,c,d;
	printf("Enter three numbers to return the average\n");
	scanf("%f%f%f",&a,&b,&c);
	d= average(a,b,c);
	printf("\nThe average is %f",d);
	return 0;
}
float average (float a,float b,float c)
{
	float m = (a+b+c)/3;
	return m;
}
