#include <stdio.h>
#include <conio.h>
int sum1(int arr[]);
void main()
{
	int array[10], i, sum;
	clrscr();
	for (i = 0; i < 10; i++)
	{
		printf("\n Enter number at index [%d]:", i);
		scanf("%d", &array[i]);
	}
	sum = sum1(array);
	printf("sum of array is =%d", sum);

	getch();
}

sum1(int arr[])
{
	int i, sum2 = 0;
	for (i = 0; i < 10; i++)
	{

		sum2 = sum2 + arr[i];
	}
	return sum2;
}
