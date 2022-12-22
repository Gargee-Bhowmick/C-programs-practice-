#include <stdio.h>
int main()
{
	int i,c=0;
	char a[1000000],t;
	printf("Enter a string\n");
	scanf("%[^\n]s",a);
	for(i=0;i<1000000;i++)
	{
		if(a[i]=='\0')
		break;
		c=c+1;
	}
	for(i=0;i<=c/2-1;i++)
	{
		t=a[i];
		a[i]=a[c-1-i];
		a[c-1-i]=t;
	}
	printf("The reversed string is %s",a);
	return 0;
}
