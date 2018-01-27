#include<stdio.h>
void main()
{
	char a;
	//printf("enter the character");
	gets(&a);
	if((a>=65 && a<=91)|| (a>=97&&a<=123))
	{
		printf("alphabet");
	}
	else
	{
		printf("No");
	}
}
