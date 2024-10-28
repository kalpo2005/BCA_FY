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
        sum =sum *10+b;
        a=a/10;

    }
    if (n==sum)
    {
         printf("palindrome\n");
    }
    else 
    {
        printf("not palindrome");
    }

    return 0;
}