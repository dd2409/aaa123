//sum of elements of two array to form a new array
//Dheeraj Doodhya ,,modified by Ashwini Solanki
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[5],b[5],c[5];

printf("\nenter the elements of first array\n");
for(i=0;i<=4;i++)
	{
	printf("\nenter %d element\n",i+1);
	scanf("%d",&a[i]);
	}

printf("\narray is\n");
for(i=0;i<=4;i++)
	{
	printf("\t%d",a[i]);
	}

printf("\nenter the elements of second array\n");
for(j=0;j<=4;j++)
	{
	printf("\nenter %d element\n",j+1);
	scanf("%d",&b[j]);
	}

printf("\narray is\n");
for(j=0;j<=4;j++)
	{
	printf("\t%d",b[j]);
	}
printf("\nresultant array is");
for(i=0;i<=4;i++)
 {
  c[i]=a[i]+b[i];
  printf("\t%d",c[i]);
 }
getch();
}
