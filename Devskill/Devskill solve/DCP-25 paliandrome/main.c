#include <stdio.h>
#include <string.h>
int main(void) {
	int i,n;
	char a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
        strcpy(b,a);
        strrev(a);
		if(strcmp(a,b)==0)
		printf("Yes\n");
		else
		printf("No\n");
	}



	return 0;
}
