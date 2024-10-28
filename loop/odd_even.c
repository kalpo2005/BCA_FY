#include <stdio.h>
int main ()
{
    int i;
    i=1;
    while(i<=100){
        if (i%2==0) // i%2!=0 for odd
       {

        printf("%d\n ",i);
        }
        i++;
    }
    return 0;
}