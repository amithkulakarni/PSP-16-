#include<stdio.h>
int main()
{
	int km,m,cm;
	printf("enter distance in km");
	scanf("%d",&cm);
	m=km*1000;
	cm=m*100;
	printf("value in meters is %d",m);
	printf("\nvalue in centimeters is %d",cm);
}
