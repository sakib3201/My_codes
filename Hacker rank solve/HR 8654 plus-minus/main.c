#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[101],i,pos=0,neg=0,zer=0;
    double po,ne,ze;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
        else
            zer++;
    }
    po=pos/(double)n;
    ne=neg/(double)n;
    ze=zer/(double)n;
    printf("%lf\n",po);
    printf("%lf\n",ne);
    printf("%lf\n",ze);
    return 0;
}
