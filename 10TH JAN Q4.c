#include <stdio.h>
void pattern(char arr[],int d)
{
	int i,j;
	char *b=&arr[0];
	printf("The desired pattern in forward order is:\n");
	for(i=0;i<d;i++)
	{
		for(j=i;j<d;j++)
		printf("%c",*(b+j));
		printf("\n");
	}
	printf("The reverse pattern is");
	for(i=d;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		printf("%c",*(b+j));
		printf("\n");
	}
}
int main()
{
	char a[0];
	char *b=a;
	int i,j,c=0;
	printf("Enter the string whose pattern is to be displayed\n");
	scanf("%[^\n]s",b);
	for(c=0;a[c]!='\0';c++);
	printf("%d",c);
	pattern(a,c);
	return 0;
}


