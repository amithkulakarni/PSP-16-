#include<stdio.h>
main()
{
	int a=1;
	for (a=1;a<20;a++)
	{
		printf("\n  %d",a++);
	}
		for (a=1;a<20;++a)
	{
		printf("\n  %d",++a);
	}
return 0;
}
