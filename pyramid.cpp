#include<stdio.h>
int main()
{
	int i,j,k,rows,space;
	printf("enter rows and coloumns and lines");
	scanf("%d %d %d", &i,&j,&k);
    for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= space; j++)
      printf(" ");
 
    space--;
 
    for (k = 1; k <= 2*i-1; k++)
      printf("*");
 
    printf("\n");
  }
 
 
 
 
  // Display Inverted Pyramid 2
 
 
  space = 1;
 
  for (i = 1; i <= rows - 1; i++)
  {
    for (j = 1; j <= space; j++)
      printf(" ");
 
    space++;
 
    for (k = 1 ; k <= 2*(rows-i)-1; k++)
      printf("*");
 
    printf("\n");
  }}

