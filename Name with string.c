#include <stdio.h>
int main()
{
	char a[1000000];
	printf("Enter your name\n");
	scanf("%[^\n]s",a);
	printf("Hello %s!",a);
	return 0;
}
