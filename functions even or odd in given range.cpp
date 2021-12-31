#include<stdio.h>
void even();
void odd();
void main()
{
	printf("function calling\n");
	odd();
	even();
}
void even()
 {
 	int a,e;
 	printf("enter the number to which you want numbers\n");
 	scanf("%d",&e);
	for(a=0;a<=e;a++)
	{
		if(a%2==0)
		{
			printf("\neven numbers are %d",a);
		}
	}
 } 
void odd()
{
	int a,e;
 	printf("enter the number to which you want numbers");
 	scanf("%d",&e);
	for(a=0;a<=e;a++)
	{
		if(a%2!=0)
		{
			printf("\nodd numbers are %d",a);
		}
	}
 } 
 
