#include <stdio.h>
int main ()
{
    int a,b,n,sum;
    printf("enter any number :");
    scanf("%d",&a);
    sum=0;
    n=a;

    while(a>0)
    {
        b=a%10;
        sum =sum+b;
        a=a/10;

    }
      printf("\n reverse number is %d ",sum);

    return 0;
}