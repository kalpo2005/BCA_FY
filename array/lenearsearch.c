#include <stdio.h>  
 int main()
 {
    int a[5],i,key,flag=0;

    for(i=0;i<5;i++)
    {
        printf("enter any number %d :",i);
        scanf("%d",&a[i]);
    } 

    
        printf("enter any number for search :");
        scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if (a[i]==key)
          {
             flag = 1;
          }
    }
    if (flag==1)
    {
        printf("element is present ");
    }
    else{
        printf("element is not present ");
    }


 
   return 0;  
}   