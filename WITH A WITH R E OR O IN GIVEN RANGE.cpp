#include<stdio.h>
void odd(int a,int e)
{


	
	for(a=1;a<=e;a++)
	{
		printf("%d",a);	
	}
}
void even(int b,int e)
{  
	for(b=1;b<=e;b++)
	{
		printf("%d",b);	
	}
}
void main()
{
	int x,y,z,k,u;
	printf("enter number");
	scanf("%d",u);
	z=odd(x);
    k=even(y);
}
