#include <stdio.h>
#include <conio.h>
int maxarray(int arr[], int size);
void main()
{
	int array[10], i, n;
	int max;
	clrscr();
	printf("Enter any number for array inxex :");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element of [%d] :", i);
		scanf("%d", &array[i]);
	}
	max = maxarray(array, n);

	printf("Maximum vslue is = %d", max);
	getch();
	
	
}
int maxarray(int arr[], int size)
{
	int maxvalue, i;
	int temp;
	temp = arr[0];
	for (i = 0; i < size; i++)
	{
		if (temp < arr[i])
		{
			temp = arr[i];
		}
	}
	return temp;
}