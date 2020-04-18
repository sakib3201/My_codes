#include <stdio.h>
#include <math.h>
int main(void) {
   int t,i;
   double cx,cy,px,py,r,k;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
   	scanf("%lf %lf %lf %lf %lf",&cx,&cy,&r,&px,&py);
   	k=sqrt(((cx-px)*(cx-px))+((cy-py)*(cy-py)));
   	if(k==r)
   	printf("Case %d: OnCircle\n",i);
   	else if(k<r)
   	printf("Case %d: Inside\n",i);
   	else
   	printf("Case %d: Outside\n",i);

   }






	return 0;
}
