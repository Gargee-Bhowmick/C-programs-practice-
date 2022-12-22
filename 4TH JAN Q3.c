#include <stdio.h>
int main()
{
	int n,i,*b,*c,t;
	printf("Enter the number of elements you want in the array (only even number)\n");
	scanf("%d",&n);
	int a[n];
	b=&a[0];
	c=&a[n/2];
	printf("Enter the %d elements you want to display\n",n);
	for (i=0;i<n;i++)
	scanf("%d",b+i);
	printf("The inverted array is\n");
	for(i=0;i<n/2;i++)
	{
	 if(*(c+i)<*(b+i))
	 {
	 	t=*(b+i);
	 	*(b+i)=*(c+i);
	 	*(c+i)=t;
	 }
	 
	}
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
	return 0;
}
