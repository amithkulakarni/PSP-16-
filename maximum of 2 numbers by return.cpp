#include <stdio.h>
int maximumof2(int a, int b){
if (a>b)
{
printf("%d is greater than %d",a,b);
}
else{
printf("%d is greater than %d",b,a);
}
}
int main(){
int i,j;
printf("Enter two numbers to compare :- ");
scanf("%d %d",&i,&j);
maximumof2(i,j);
}
