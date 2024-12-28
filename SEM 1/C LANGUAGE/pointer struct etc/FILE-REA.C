#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *fp;
	clrscr();
	char name;
      /*	printf("enter your notes here:\n");
	scanf("%s",name);   */

	fp=fopen("fileopen.txt","r");

	while(name=getc(fp)!=EOF)
	{
	 printf("%c",name);
	}
	fclose(fp);
 getch();
}