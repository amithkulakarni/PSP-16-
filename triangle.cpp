#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
	printf("Given sides are belongs to Equilateral triangle");
    }
    else if(a==b || b==c || c==a)
	{
    printf("Given sides are belongs to isoceles triangle");
    }
    else
    {
    printf("Given sides are belongs to scalene triangle");	
	}
	return 0;
	}
