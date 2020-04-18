#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000];
    int i;
    while(gets(a))
    {
        for(i = 0; a[i]; i++)
            printf("%c", a[i]-7);
        puts("");
    }
    return 0;
}
