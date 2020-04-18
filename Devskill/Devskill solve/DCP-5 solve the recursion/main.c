#include <stdio.h>

int main(void) {
    int n1,n2,n3,i,min;
	scanf("%d %d %d",&n1,&n2,&n3);
	if((n1>=n2&&n2>=n3)||(n3>=n2&&n2>=n1))
    i=n2+n2;
    else if((n1>=n3&&n3>=n2)||(n2>=n3&&n3>=n3))
    i=n3+n3;
    else
    i=n1+n1;
    if(n2<=n1&&n2<=n3)
    min=n2;
    else if(n1<=n2&&n2<=n3)
    min=n1;
    else
    min=n3;

    printf("%d\n",(i+min));


	return 0;
}
