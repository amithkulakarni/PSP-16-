#include<stdio.h>
int main ()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("its a positive number");
	}
	else if(a<0)
	{
		printf("its a negitive number");
	}
	else
	{
		printf("its a zero");
	}
	
}
