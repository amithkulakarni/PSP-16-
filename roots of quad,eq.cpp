#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("enter coefficients of a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	  	r1=(-b+sqrt(d))/2*a;
	 	r2=(-b-sqrt(d))/2*a;
     if (d>0)
     {
      printf("roots are real and distinct \n:");
      printf("the root1 is %f \n the root2 is %f",r1,r2);
     }
     else if (d==0)
     {
     	printf("roots are real and equal \n:");
     	printf("the root1 is %f \n the root2 is %f",r1,r2);
     }
     else 
     {
     	printf("roots are imaginary");
     	printf("the root1 is %f \n the root2 is %f",r1,r2);
     }
 }

              
