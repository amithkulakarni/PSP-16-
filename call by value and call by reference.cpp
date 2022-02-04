#include <stdio.h>
int sum1(int *i, int *j){
printf("%d is the sum of %d and %d",*i+*j,*i,*j);
}
int sum2(int k, int l){
printf("the sum of %d and %d is %d",k,l,k+l);
}
int main(){
int a=50,b=40;
sum1(&a,&b);
printf("\n\n");
sum2(a,b);
}
