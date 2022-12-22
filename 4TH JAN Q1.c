#include <stdio.h>
int main()
{
	int n,i,*b;
	printf("Enter the number of elements you want in the array \n");
	scanf("%d",&n);
	int a[n];
	b=a;
	printf("Enter the %d elements you want to display\n",n);
	for (i=0;i<n;i++)
	scanf("%d",b+i);
	printf("The array is\n");
	for(i=0;i<n;i++)
	{
	printf("%d ",*b);
	b++;
	}
	return 0;
}
