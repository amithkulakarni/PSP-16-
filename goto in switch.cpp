#include<stdio.h>
int main()
{
	int week;
	printf("enter the choice:");
	scanf("%d",&week);
	switch(week)
	{		
	case 1:
	printf("Monday");
	break;
	day2 :
    case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Saturday");
	break;
	case 7:
	printf("Sunday");
	break;
	case 8:
	goto day2;
	break;
		
	default:
		printf("Invalid");	
	}
	return 0;
}
