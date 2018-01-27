#include<stdio.h>
void main()
{
	char a;
	printf("enter the character");
	gets(&a);
	if((a>=65 && a<=91)|| (a>=97&&a<=123))
	{
	
	if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u' || a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("Consonant");
	}
}
else{
	printf("Not an alphabet");
}
}
