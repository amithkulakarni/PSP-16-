#include<stdio.h>
int main()
{
	char ch;
	printf(" enter sentence");
	 while(ch=getchar())
	{
	
		if(ch>=65 && ch<=90)
		{
		
		putchar(ch+32);
	    }
	
	
	else
	{
		putchar(ch);
	}
}
     
 }

