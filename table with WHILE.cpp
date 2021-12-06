#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n;
	printf("enter n");
	scanf("%d",&n);
	while (i<=20)
	{
      printf("%d * %d = %d \n", n, i, n * i);
      i++;
    }
    return 0;
}
	
