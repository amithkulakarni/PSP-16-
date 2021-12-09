#include <stdio.h>  
int main()   
{    int n,i=1;   
  printf("Enter the number");   
  scanf("%d",&n);
  table:     
  printf("%d x %d = %d\n",n,i,n*i);  
  i++;  
  if(i<=10)  
  goto table;    
}  
 
