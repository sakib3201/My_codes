#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100][100],r,c,i,dsum=0,lsum=0,h;
   scanf("%d",&n);
   for(r=0;r<n;r++)
   {
     for(c=0;c<n;c++)
     scanf("%d",&a[r][c]);
     c=0;
   }
   for(r=0,c=0;r<n&&c<n;r++,c++)
       dsum+=a[r][c];
   for (r = n-1, c = 0; c < n && 0 <= r; r--, c++)
     lsum += a[r][c];
    h=fabs(dsum-lsum);
    printf("%d",h);
  return 0;
}
