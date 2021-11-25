#include<stdio.h>
main()
{
	int a,b,c,s,m;
	float d;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	c=a+b;s=a-b;m=a*b;d=a/b;
	printf("\naddition of a,b: %d",c);
	printf("\nsubstraction of a,b: %d",s);
	printf("\nmultiplication of a,b: %d",m);
	printf("\ndivision of a,b: %0.3f",d);
	return 0;
}
