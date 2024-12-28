#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	clrscr();
	textcolor(RED);
	textbackground(WHITE);
	for(i=0;i<=50;i++)
	{
		cprintf("  I LOVE YOU \3  ");
		delay(100);
	}
 getch();
}