#include<stdio.h>
int lcm(int a,int b,int c,int d)
{
if(d<=b || d<=a)
{
if((c*d)%a==0 && (c*d)%b==0)
{
printf("lcm is %d",c*d);
}
else
{
lcm(a,b,c,d+1);
}
}
}
int main()
{
int a,b,c,d;
printf("enter 2 numbers to find their lcm: ");
scanf("%d %d",&a,&b);
d=1;
if(a>b)
{
c=b;
lcm(a,b,c,d);
}
else if(b>a)
{
c=a;
lcm(a,b,c,d);
}
}
