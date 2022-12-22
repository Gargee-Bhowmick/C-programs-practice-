#include <stdio.h>
void change(int n, int a[n], int *b)
{
	int i;
	for (i=0;i<n;i++)
	if(a[i]!=*b)
	a[i]=a[i]+*b;
}
int main()
{
	int n,i,b;
	printf("Enter the number of elements you want in an array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the index of the element whose value is to be added to the element of other indexes\n");
	scanf("%d",&b);
	change(n,a,&a[b]);
	printf("The modified array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
