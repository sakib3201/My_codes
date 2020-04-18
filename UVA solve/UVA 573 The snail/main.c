#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,d,u,f,frate,inh;
    int day=1;
    while(1)
    {
        scanf("%lf %lf %lf %lf",&h,&u,&d,&f);
        if(h==0)
            break;
        frate=(h*f)/100.0;
        day=0;
        inh=0;
        frate=u*f/100.0;
        while(1)
        {
            day++;
            if(u>0)
                inh=inh+u;
            u=u-frate;
            if(inh>h)
                break;
            inh=inh-d;
            if(inh<0)
                break;
        }

        if(inh>=0)
        printf("success on day %d\n",day);
        else
            printf("failure on day %d\n",day);

    }
    return 0;
}
