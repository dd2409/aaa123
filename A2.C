#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("\nEnter the array elements\n");
for(i=0;i<=4;i++)
	{
	printf("enter the %dth element",i+1);
	scanf("%d",a[i]);
	}
for(i=0;i<=4;i++)
printf("%d",a[i]);
getch();
}

