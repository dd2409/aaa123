#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
printf("\nEnter the array elements\n");
for(i=0;i<=9;i++)
	{
	printf("\nEnter the %dth element\n",i+1);
	scanf("%d",&a[i]);
	}
printf("\narray is\n");
	for(i=0;i<=9;i++)
	printf("\t%d",a[i]);
getch();
}

