#include <stdio.h>
void optr(int a,int b, char c)
{
	switch (c)
	{
		case '+': printf("%d+%d = %d",a,b,a+b);  break;
		case '-': printf("%d-%d = %d",a,b,a-b);  break;
		case '/': printf("%d/%d = %d",a,b,a/b);  break;
		case '%': printf("%d%c%d = %d",a,'%',b,a%b);  break;
		case '*': printf("%d*%d = %d",a,b,a*b);  break;
		case '>': (a>b)?  printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);  break;
		case '<': (a<b)?  printf("%d is smaller than %d",a,b) : printf("%d is smaller than %d",b,a);  break;
		default : printf ("please enter an appropriate operation\n");
	              main();
	              break;
	}
}
int main()
{
	int c,d;
	char e;
	printf ("\nEnter the operation you want to perform\n");
	printf ("Choose from +,-,%c,/,*,>,<\n",'%');
	scanf ("%c",&e);
	printf ("Enter the first and second numbers respectively on which you want to perform the operation\n");
	scanf ("%d%d",&c,&d);
	optr (c,d,e);
	return 0;
}
