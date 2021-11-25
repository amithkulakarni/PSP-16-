#include<stdio.h>
main()
{
	float km,mt,cm;
	printf("enter kilometers");
	scanf("%f",&km);
	 mt=km*1000;
	 cm=mt*100;
	 printf("meters %f",mt);
	 printf("\ncentimeters %f",cm);
	 return 0;
}
