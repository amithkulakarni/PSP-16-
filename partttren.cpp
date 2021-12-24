#include<stdio.h>
int main()
{
	int q,w;
	for(q=1;q<28;q++)
	{
		for(w=1;w<q;w++)
		{
			printf("%c",w+64);
	    }
	    printf("\n");
}
   for(q=28;q>1;q--)
	{
		for(w=1;w<q;w++)
		{
			printf("% c",w+64);
	    }
	    printf("\n");
}

}
	
