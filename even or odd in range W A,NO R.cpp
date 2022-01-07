#include<stdio.h>
void odd(int a)
{
	int b;
    for(b=1;b<=a;b++)
	{
		if(b%2!=0)
		{
		printf("\n odd numbers are %d",b);	
	   } 
	}
}
void even(int j)
{  
	int i;
	for(i=1;i<=j;i++)
	{
		if(i%2==0)
		{
		printf("\neven numbers are %d",i);
	    }

}
}
 int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	even(n);
	odd(n);
	return 0;
}

