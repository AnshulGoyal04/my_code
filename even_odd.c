#include<stdio.h>
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Even");
	}
	else if(a%2!=0)
	{
		printf("odd");
	}
	else
	{
		printf("Wrong Input");
	}
}
