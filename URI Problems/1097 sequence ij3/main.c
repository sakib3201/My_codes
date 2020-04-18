#include <stdio.h>
int main()
{
    int i,j,c=0;
    i=1;
    j=7;
    while(i!=11)
    {
        printf("I=%d J=%d\n",i,j);
        c++;
        j--;
        if(c==3)
        {
            j=j+5;
            i=i+2;
            c=0;
        }
    }
    return 0;
}
