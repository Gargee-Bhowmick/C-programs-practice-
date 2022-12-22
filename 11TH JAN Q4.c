#include <stdio.h>
int max(int m,int n,int a[m][n])
{
	int o=a[0][0],i,j;
	printf("The desired array is \n");
	for(i=0;i<m;i++)
	{ 
	for (j=0;j<n;j++)
	{
	printf("%d\t",a[i][j]);
	if(a[i][j]>o)
	o=a[i][j];
    }
    printf("\n");
	}
	return o;
}
int main()
{
	int n,i,j,m,o;
	printf("Enter the number of rows and columns respectively you want in a 2-D array\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the %d elements of the array\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	o=max(m,n,a);
	printf("The maximum  element of the array is %d ",o);
	return 0;
}

