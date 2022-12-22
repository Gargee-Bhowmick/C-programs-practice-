#include <stdio.h>
int main()
{
	char a[]="ABCDEF", *b = &a[1]; int i;
	for(i=0;i<=5;i++)
	printf("%c",*(b+i));
	return 0;
}
