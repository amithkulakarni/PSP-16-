#include<stdio.h>
main()
{
	float a,b,c,d,e,tot,avg,per;
	printf("enter value of a");
	scanf("%f",&a);
	printf("enter value of b");
	scanf("%f",&b);
    printf("enter value of c");
    scanf("%f",&c);
	printf("enter value of d");
	scanf("%f",&d);
	printf("enter value of e");
	scanf("%f",&e);
	tot=a+b+c+d+e;
	avg=(a+b+c+d+e)/5;
	per=(a+b+c+d+e)/500*(100);
	printf("total marks %f",tot);
	printf("average marks %f",avg);
	printf("percentage of marks %f",per);
	return 0;
}
