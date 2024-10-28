#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	char name[10];
	printf("enter your notes here:\n");
	scanf("%s",name);

	fp=fopen("fileopen.txt","w");

	for(i=0;i<=strlen(name);i++)
	{
	 putc(name[i],fp);
	}
	fclose(fp);
 getch();
}