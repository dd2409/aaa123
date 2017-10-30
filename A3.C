//Sum of elements of a matrix
//Dheeraj Doodhya
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;

for(i=0;i<=4;i++)
	{
	printf("\nenter the %dth element\n",i+1);
	scanf("%d",&a[i]);
	}
printf("\narray is\n");
for(i=0;i<=4;i++)
printf("\t%d",a[i]);
for(i=0;i<=4;i++)
	{
	sum=sum+a[i];
	}
printf("\nsum of the elements of array is %d",sum);
}
