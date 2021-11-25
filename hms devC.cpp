#include<stdio.h>
main()
{
	int h,m,s;
	printf("enter hour");
	scanf("%d",&h);
	 m=h*60;
	 s=m*60;
	 printf("minutes %d",m);
	 printf("\nseconds %d",s);
	 return 0;
}
