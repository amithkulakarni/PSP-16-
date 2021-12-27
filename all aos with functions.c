#include<stdio.h>
void add();
void sub();
void mult();
void divi();
void main()
{
	printf("function calling my self");
    add();
    sub();
    mult();
    divi();
}
void add()
{
	float a,b,c;
	printf("\nenter the value of a,b");
	scanf("%f %f",&a,&b);
	c=a+b;
	printf("\naddition of a,b: %f",c);
}
void sub()
{
	float a,b,s;
	printf("\nenter the value of a,b");
	scanf("%f %f",&a,&b);
	s=a-b;
	printf("\nsubstraction of a,b: %f",s);
}
void mult()
{
	float a,b,m;
	printf("\nenter the value of a,b");
	scanf("%f %f",&a,&b);
	m=a*b;
	printf("\nmultiplication of a,b: %f",m);
}
void divi()
{
	float a,b,d;
	printf("\nenter the value of a,b");
	scanf("%f %f",&a,&b);
	d=a/b;
	printf("\ndivision of a,b: %f",d);
}

