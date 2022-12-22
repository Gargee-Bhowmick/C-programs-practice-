#include <stdio.h>
int max(int a[],int n)
{
	int m=a[0],i;
	printf("The desired array is \n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	if(a[i]>m)
	m=a[i];
	}
	return m;
}
int main()
{
	int n,i,m;
	printf("Enter the number of elements you want in an array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	m=max(a,n);
	printf("The maximum  element is %d ",m);
	return 0;
}
