#include<stdio.h>
#include<conio.h>

void main()
{
	float p,r,t;
	int sum=0;
	clrscr();
	printf("enter value of p :-");
	scanf("%f",&p);
	printf("enter value of r :-");
	scanf("%f",&r);
	printf("enter value of t :-");
	scanf("%f",&t);
	sum=(p*r*t)/100;
	printf("sum = %d ",sum);
	getch();
 } 

