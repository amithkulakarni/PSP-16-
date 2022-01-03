#include<stdio.h>
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int sub(int u,int v)
{
	
	int r;
	r=u-v;
	return r;
}
int mul(int m,int n)
{
	
	int e;
	e=m*n;
	return e;
}
int div(int s,int t)
{
	
	int f;
	f=s/t;
	return f;
}

int main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	c=div(a,b);
    printf(" %d ",c);
}

