//program to illustrate call by value and call by reference
#include <stdio.h>
void CallByValue(int i)
{
	i=i+2;
	printf("i = %d(value of a has been copied in 'i' which has further been changed by 2 in the function)\n",i);//Here the value of 'a' was passed on to 'i' in this CallByValue function.
}
void CallByReference(int *b)
{
	*b=*b+2; //Here the value stored in the address of 'a' has been modified by 2
}
int main()
{
	int a=24;
	printf("a=24(initially)\n");
	CallByValue(a); //call by value, a copy of the value of 'a' has been passed to the function sum2
	printf("a=%d(after call by value)\nThe value stored in 'a' is unchanged\n",a);//the value stored in 'a' remains the same
	CallByReference(&a); //call by reference, address of 'a' has been passed to the function CallByReference
	printf("a=%d(after call by reference)\nThe value stored in 'a' has changed\n");//The value of 'a' has changed
    return 0;
}


