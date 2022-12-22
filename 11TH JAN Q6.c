#include <stdio.h>
void copy(int n, int a[n], int b[n])
{
	int i;
	for (i=0;i<n;i++)
	b[i]=a[i];
}
int main()
{
	int n,i;
	printf("Enter the number of elements you want in an array\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	copy(n,a,b);
	printf("The copied array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",b[i]);
	return 0;
}
