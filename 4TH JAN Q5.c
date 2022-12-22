#include <stdio.h>
int main()
{
	int n,m,i,*b;
	printf("Enter the number of rows and columns respectively you want in the array \n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	b=&a[0][0];
	printf("Enter the %d elements you want to display\n",m*n);
	for (i=0;i<m*n;i++)
	scanf("%d",b+i);
	printf("The 2-D array is\n");
	for(i=0;i<m*n;i++)
	{ 
	if(i%m==0)
	printf("\n");
	printf("%d\t",*(b+i));
	}
	printf("\nThe array in reverse order is\n");
	for(i=m*n-1;i>=0;i--)
	{ 
	printf("%d\t",*(b+i));
	if(i%m==0)
	printf("\n");
	}
	return 0;
}
