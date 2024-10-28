#include<stdio.h>
#include<conio.h>
struct sum
{
	int a,b;
	int sum,sub,multiplication,division;
} ;

void main()
{
	struct sum s1;
	clrscr();

	printf("Enter value a and b :");
	scanf("%d%d",&s1.a,&s1.b);

	s1.sum=s1.a+s1.b;
	s1.sub=s1.a-s1.b;
	s1.multiplication=s1.a*s1.b;
	s1.division=s1.a/s1.b;

	printf("\n %d",s1.sum);
	printf("\n %d",s1.sub);
	printf("\n %d",s1.multiplication);
	printf("\n %d",s1.division);
	printf("\n Program end");


 getch();
}