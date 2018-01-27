#include<stdio.h>
void main()
{
	int a,i;
	scanf("%d",&a);
	if(a>0)
	{
	i=a*(a+1)/2;
	printf("%d",i);
	}
	else
	{
		printf("Not a natural number");
	}

}
