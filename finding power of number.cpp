#include<stdio.h>
#include<math.h>
int power(int b, int exp)
{
int pn;
pn=pow(b,exp);
printf("%d power of %d is equal to %d",exp,b,pn);
return(0);
}
int main(void){
int b,exp;
printf("Enter base number and exponent here -> ");
scanf("%d %d",&b,&exp);
power(b,exp);
}

