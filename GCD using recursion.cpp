#include<stdio.h>
int hcf(int a,int b,int n,int z)
{
if(n<a && n<b)
{
if(a%n==0 && b%n==0)
{
z=n;
hcf(a,b,n+1,z);
}
else
{
hcf(a,b,n+1,z);
}
}
else if(n==a || n==b)
{
if(a%n==0 && b%n==0)
{
printf("%d",n);
}
else
{
printf("%d",z);
}
}
}
int main()
{
int a,b,n,z;
printf("enter your 2 numbers to find hcf: ");
scanf("%d %d",&a,&b);
n=1;
z=1;
hcf(a,b,n,z);
}
