#include<stdio.h>
int main ()
{
    int a[3][3],j,i;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elemrnt [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // code by kalpesh bavaliya
    
            printf("----------------\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}