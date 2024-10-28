#include <stdio.h>
int main ()
{
    int n,i,b;

    printf("enter prime number for cheaking :");
    scanf("%d", &n);

    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            b=0;
            break ;
        }

        if (b==0)
        {
            printf("y");
        }

        else 
        {
            printf("no");
        }
        

    }




    return 0;
}