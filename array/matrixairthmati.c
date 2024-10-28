#include<stdio.h>
int main ()
{
    int a[3][3],b[3][3],k,j,i;
    int c[3][3],d[3][3],mul[3][3];
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elemrnt a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elemrnt b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }  

    //for aithmatic 

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];

            mul[i][j]=0;
            
            for(k=0;k<3;k++)
            {
                mul[i][j]=a[i][k]*b[k][j]+mul[i][j];
            }
        }
    }
    
            printf("----------------\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
            
        }
        printf("\n");
    }
    printf("----------------\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",d[i][j]);
            
        }
        printf("\n");
    }
    printf("----------------\n ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mul[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}