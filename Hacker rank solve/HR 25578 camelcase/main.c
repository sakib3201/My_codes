#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,c=1;
    char a[10001];
    gets(a);
    n=strlen(a);
    for(i=1;i<n;i++)
    {
        if('Z'>=a[i]&&a[i]>='A')
            c++;
    }
    printf("%d",c);


    return 0;
}
