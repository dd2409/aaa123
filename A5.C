#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[5],p;
clrscr();
printf("\nenter the array elements\n");
for(i=0;i<5;i++)
{
printf("enter element\n");
scanf("%d",&a[i]);
}
printf("\nresultant array is\n");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
p=a[0];
for(i=0;i<5;i++)
	{
	if(p<a[i])
	p=a[i];
	}
printf("greatst element of array is %d",p);
getch();
}