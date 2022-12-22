#include <stdio.h>
int main()
{
	char a[1000000];
	char t;
	int i;
	printf("Enter your name\n");
	scanf("%[^\n]s",a);
	for(i=0;i<2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	printf("Hellow %s",a);
	return 0;
}
