#include<stdio.h>
main()
{
	float c,k,f;
	printf("enter celcius");
	scanf("%f",&c);
	 k=c+273;
	 f=c*(9/5)+32;
	 printf("kelvin %f",k);
	 printf("\nfarenheit %f",f);
	 return 0;
}
