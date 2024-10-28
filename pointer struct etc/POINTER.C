#include<stdio.h>
#include<conio.h>
void main()
{
	float n,*p;
	clrscr();
	p=&n;
	scanf("%f",&n);

	printf("The address of %u \n",&n);
	printf("The addres of pointer (*P) %u \n",&p);
	printf("The pointer value is a %u \n",p);
	printf("The value of n is a %f \n",n);
	printf("The pointer through n value is a %f \n",*p);
	printf("The value is a %f \n",*(&n));

 getch();
}