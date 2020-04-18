#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,m,ha,ma,ang;
    while(1)
    {
      scanf("%f:%f",&h,&m);
      if((h==0&&m==0))
      {
          break;
      }
      ha=(h+(m/60))*30;
      ma=m*6;

       if(ha>ma)
      {
          ang=ha-ma;
      }
      else if(ma>ha)
      {
          ang=ma-ha;
      }
      if(ang>180)
        ang=360-ang;
      printf("%.3f\n",ang);
    }
    return 0;
}
