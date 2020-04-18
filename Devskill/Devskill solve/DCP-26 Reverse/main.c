#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    char a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       fgets(a);
       strrev(a);
       puts(a);
    }


    return 0;
}
