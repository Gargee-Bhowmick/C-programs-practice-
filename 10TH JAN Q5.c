#include <stdio.h>
void pattern(char a,int b,int c)
{
	int i,j;
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		printf("%c",a);
		printf("\n");
	}
}
int main()
{
	int b,c,d,e,i,j;
	char a,g,f;
	printf("Enter the first character whose pattern you want to print\n");
	scanf("%c",&a);
	printf("Enter the number of rows and columns for the first pattern respectively\n");
	scanf("%d%d",&b,&c);
	printf("Enter the second character whose pattern you want to print\n");
	scanf(" %c",&g);
	printf("Enter the number of rows and columns for the second pattern respectively\n");
	scanf("%d%d",&d,&e);
	printf("Enter the three character whose pattern you want to print\n");
	scanf(" %c",&f);
	printf("Enter the number of rows and columns for the third pattern respectively\n");
	scanf("%d%d",&i,&j);
	pattern(a,b,c);
	printf("AB\n");
	pattern(g,d,e);
	printf("DF\n");
	pattern(f,i,j);
	return 0;
}
