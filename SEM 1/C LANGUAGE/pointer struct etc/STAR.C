#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=0,m;
	clrscr();
	scanf("%d",&m);
	for(i=m;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf(" *");
			n++;
		}
		printf("\n");
	}
	printf("\n %d",n);
 getch();
}