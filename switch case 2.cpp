#include<stdio.h>
int main()
{
	int ch,hour,min,sec,km,met,cm,cel,far,kel,lit,ml,cbm;
	printf("enter the choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("enter the value in hour");
	min=hour*60;
	sec=min*60;
	printf("%d",min);
	printf("\n%d",sec);
	break;
    case 2:
	printf("\nenter the value kilometer");
	scanf("%d",&km);
	met=km*1000;
	cm=met*100;
	printf("\n %d ",met);
	printf("\n %d ",cm);
	break;
	case 3:
	printf("\nenter celcius value:");
	scanf("%d",&cel);
	far=(cel*9/5)+32;
	kel=cel+273;
	printf("\n%d",far);
	printf("\n%d",kel);
	break;
	case 4:
	printf("\nEnter the litre");
	scanf("%d",&lit);
	ml=lit*1000;
	cbm=ml*1000;
	printf("\n%d",ml);
    printf("\n%d",cbm);
	break;
	}

	return 0;
	
	
}
