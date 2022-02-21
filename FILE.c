#include<stdio.h>
void main()
{
 int i;
 char name[15];
 FILE *fp;
 fp=fopen("data1.txt","w");
 
 printf("Input an integer");
 scanf("%d",&i);
 printf("Enter your name:");
 scanf("%s",name);
 fprintf(fp,"%d\n%s",i,name);
 fclose(fp);
  }

