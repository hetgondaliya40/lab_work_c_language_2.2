#include<stdio.h>
#include<conio.h>

void main()
{
	int ic,cs,maths,eng,html,js,c,sum=0;
	clrscr();
	printf("enter value of ic :-");
	scanf("%d",&ic);
	printf("enter value of cs :-");
	scanf("%d",&cs);
	printf("enter value of maths :-");
	scanf("%d",&maths);
	printf("enter value of eng :-");
	scanf("%d",&eng);
	printf("enter value of html :-");
	scanf("%d",&html);
	printf("enter value of js :-");
	scanf("%d",&js);
	printf("enter value of c :-");
	scanf("%d",&c);
	sum=ic+cs+maths+eng+html+js+c;
	printf("sum = %d ",sum/400*100);
	getch();
 } 
