#include <stdio.h>
//#include <stdlib.h>

int main()
{
    float a[100];
    int n,i;
 //for(;;)
  //  {
scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for (i=1;i<n;i++)
    {
           if(a[0]>a[i])
           a[0]=a[i];
    }
    printf("%.2f\n",a[0]);
    //}
    return 0;
}
