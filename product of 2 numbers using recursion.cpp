#include<stdio.h>
int product(int a,int b)
{
int p;
if(b==0||a==0)
{
return 0;
}
else if(b==1)
{
return a;
}
else if(b>1)
{
p=a+product(a,b-1);
return p;
}
}
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=product(a,b);
printf("%d",c);
}

