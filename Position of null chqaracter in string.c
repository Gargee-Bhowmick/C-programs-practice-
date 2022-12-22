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
		{
			printf("The position of \\0 in the string is %d",i);
			break;
		}
	}
	return 0;
}
