#include <stdio.h>
int main()
{
	int i;
	char A[20];
	char *a; char *b; char *c; char *d; char *e;
	printf("Enter the 20 charactered string\n");
	scanf("%[^\n]s",A);
	a=&A[0]; b=&A[4]; c=&A[8]; d=&A[12]; e=&A[16];
	for(i=0;i<20;i++)
	{
		if(i%4==0)
		printf("\n");
		if(i<4)
		printf("%c",*(a+i));
		else if(i>=4&&i<8)
		printf("%c",*(b+(i%4)));
		else if(i>=8&&i<12)
		printf("%c",*(c+(i%4)));
		else if(i>=12&&i<16)
		printf("%c",*(d+(i%4)));
		else
		printf("%c",*(e+(i%4)));
	}
	return 0;
}
