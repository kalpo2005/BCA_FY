#include <stdio.h>  
 int main() 
 {
    int a[5],i,temp,j;
    for(i=0;i<5;i++) 
    {
        printf("enter value of array %d : ",i);
        scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
        for(j=0;j<5-1;j++)
         {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
   }
   printf("printing  \n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",a[i]);
    }
   return 0;  
}  