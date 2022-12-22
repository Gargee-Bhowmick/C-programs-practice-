#include <stdio.h>
void pattern (int c, char d)
{
	int i,j;
	for(i=1;i<=c;i++)
	{
		for(j=i;j<=c;j++)
		printf("%c",d);
		printf("\n");
	}
}
int main()
{
	int a; char b;
	printf("Enter the character you want to display\n");
	scanf("%c",&b);
	printf("Enter the number of lines to be printed in the pattern\n");
	scanf("%d",&a);
	pattern (a,b);
	return 0;
}
