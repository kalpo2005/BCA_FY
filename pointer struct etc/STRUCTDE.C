#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int roll;
	float marks[5];
};
void main()
{

	struct student s;
	int i;

	clrscr();
	float sum=0,p;
	printf("Enter name and roll number:");
	scanf("%s%d",s.name,&s.roll);
      //	printf("\n The name is a %s",s.name);
      //	printf("\n Enter marks obtain in five differant subject :");
	for(i=0;i<5;i++)
	{
		printf("\n enter marks of subject-%d :",i);
		scanf("%f",s.marks[i]);
		sum=sum+s.marks[i];
	}
	p=sum/5;
	printf("\n name: %s \n perchantage: %f \n roll number: %d",s.name,p,s.roll);

      getch();
}

