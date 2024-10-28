//Bubble shorting

#include<stdio.h>
#include<conio.h>
int arr(int arr[],int n);
void main()
{
	int array[10],i,n;
	clrscr();
	printf("Enter index number :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element at index [i] :",i);
		scanf("%d",&array[i]);
	}
	arr(array,n);


 getch();
}
int arr(int arr[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
	for(j=0;j<n-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}

 }
  for(i=0;i<n;i++)
  {
	printf("\n %d  ",arr[i]);
  }

}
