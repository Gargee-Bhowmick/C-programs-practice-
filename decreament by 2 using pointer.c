#include <stdio.h>
int main()
{
	int n,o,i=0;
	printf("Enter the number of elements you want\n");
	scanf("%d",&n);
	int a[n];
	int *b = &a[2];
	printf("Enter the %d elements of the array\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the number you want to replace the third element with\n");
	scanf("%d",&o);
	*b=o;
	printf("\nNow the array is: \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
	printf("\nThe second element is %d\n ",*(b-1));
	printf("\nThe required array after a decrement of 2 from the second element is\n %d %d ",*(b-2),*(b-1));
	for(i=0;i<n-2;i++)
	{
	*(b+i)=*(b+i-1)-2;
	printf("%d ",*(b+i));
    }
	return 0;
}
