#include<stdio.h>
#include<math.h>
void even();
void odd();
void main()
{
	printf("functions calling myself");
	even();
	odd();

}
void even()
{
    int a;
    for (a=1;a>=20;a++);
	{
    printf("\n%d",a++);
    }
}
    void odd()
{
	int b;
	for (b=1;b>=20;b%2!=0)
	{
    printf("%d",b);
    }
}

