#include(<stdio.h>
int main()
{
int j,i,ch;
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
// Printing * (Taking j for columns and i as rows)
case 1:
for(j=1;j<5;j++)
{
for(i=1;i<6;i++)
{
 printf("*");
}
printf("\n");
}
break;
// Printing ABCDE in Reverse Order
case 2:
for(j=1;j<5;j++)
{
for(i=5;i>0;i--)
{
 printf("%c",i+64);
}
printf("\n");
}
break;
// Printing ABCDE in Sequence Order
case 3:
for(j=1;j<5;j++)
{
for(i=1;i<5;i++)
{
 printf("%c",i+64);
}
printf("\n");
}
break;
// Printing digits in sequence order
case 4:
for(j=1;j<5;j++)
{
for(i=1;i<6;i++)
{
printf("%d",i);
}
printf("\n");
}
break;
// Printing every line in Sequence
case 5:
for(j=1;j<5;j++)
{
for(i=1;i<=j;i++)
{
printf("%d",i);
}
printf("\n");
}
break;
// Printing every line in Sequence two times
case 6:
for(j=1;j<5;j++)
{
for(i=1;i<=j;i++)
{
printf("%d",j);
}
printf("\n");
}
default:
printf("Enter correct choice:");
}
return 0;
}
