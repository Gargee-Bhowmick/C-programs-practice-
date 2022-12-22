#include <stdio.h>
int main()
{
	int i,c=0;
	char a[1000000];
	printf("Enter a string\n");
	scanf("%[^\n]s",a);
	for(i=0;i<1000000;i++)
	{
		if(a[i]=='\0')
		break;
		if(a[i]!=' ')
		c=c+1;
	}
	printf("The string is %d characters long, excluding whitespace",c);
	return 0;
}
