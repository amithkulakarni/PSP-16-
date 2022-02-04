#include<stdio.h>
int power(int a,int b)
{
int p;
if(b==0)
{
return 1;
}
else if(b==1)
{
return a;
}
else if(b>1)
{
p=a*power(a,b-1);
return p;
}
}
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=power(a,b);
printf("%d",c);
}
