#include<stdio.h>
main()
{
	int num;
	printf("Enter the Number");
	scanf("%d",&num);
	if(num/5 && num/11)
	{
	printf("Given Number is divisible by 5 and 11");
    }
    else
    {
    printf("Given Number is not divisible by 5 and 11");	
	}
	return 0;
	}
