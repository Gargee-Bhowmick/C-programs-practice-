#include <stdio.h>
int main()
{
	int a[5];
	int *b = &a[1];
	printf("Enter the value of the first element\n");
	scanf("%d",b);
	int i ;
	printf("The required array is\n%d ",a[0]);
	for(i=1;i<5;i++)
	{
	*(b+i)=*(b+(i-1))+2;
	printf("%d ",*(b+i));
    }
	return 0;
}
