#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],i,l;
    puts("Enter string :");
    scanf("%s",a);

    l=strlen(a);

    for(i=l-1;l>=0;i--)
    {
        printf("%c",a[i]);
    }

 return 0;
}