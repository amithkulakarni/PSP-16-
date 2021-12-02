#include<stdio.h>
main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(year/4)
	{
	printf("Given year is Leap year");
    }
    else
    {
    printf("Given year is not Leap year");	
	}
	return 0;
	}
