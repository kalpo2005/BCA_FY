#include <stdio.h>
int main()
{
    char a[50],i,l=0;
    puts("Enter string :");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }

    printf("\n %d",l);

   
 return 0;
}