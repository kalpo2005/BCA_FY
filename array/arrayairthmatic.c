#include <stdio.h>
int main ()
{
    int a[2],b[2],i;
    int sum[2],sub[2],div[2],mul[2];

    for(i=0;i<2;i++)
    {
            printf ("Enter any number a[%d] :",i);
            scanf("%d",&a[i]);

             printf ("Enter any number b[%d] :",i);
            scanf("%d",&b[i]);

    }

    for (i=0;i<2;i++)
    {
        sum[i]= a[i]+b[i];
        sub[i]=b[i]-a[i];
        mul[i]=a[i]*b[i];
        div[i]=b[i]/a[i];
    }

    for(i=0;i<2;i++)
    {
        printf("---------\n");
        printf("\n%d ",sum[i]);
        printf("\n%d ",sub[i]);
        printf("\n%d ",mul[i]);
        printf("\n%d ",div[i]);
    }

    
    
    return 0;    
}