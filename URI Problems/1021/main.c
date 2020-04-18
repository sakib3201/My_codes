#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,l;
    scanf("%f",&k);
    l=k*100;
    int x,n100,n50,n20,n10,n5,n2,c100,c50,c25,c10,c5,c1;
    x=l;
    n100=x/10000;
    n50=(x%10000)/5000;
    n20=((x%10000)%5000)/2000;
    n10=(((x%10000)%5000)%2000)/1000;
    n5=((((x%10000)%5000)%2000)%1000)/500;
    n2=(((((x%10000)%5000)%2000)%1000)%500)/200;
    c100=((((((x%10000)%5000)%2000)%1000)%500)%200)/100;
    c50=(((((((x%10000)%5000)%2000)%1000)%500)%200)%100)/50;
    c25=((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)/25;
    c10=(((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)/10;
    c5=((((((((((x%10000)%5000)%2000)%1000)%500)%200)%100)%50)%25)%10)/5;
    c1=(x%5);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.0\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c100);
    printf("%d moeda(s) de R$ 0.50\n",c50);
    printf("%d moeda(s) de R$ 0.25\n",c25);
    printf("%d moeda(s) de R$ 0.10\n",c10);
    printf("%d moeda(s) de R$ 0.05\n",c5);
    printf("%d moeda(s) de R$ 0.01\n",c1);

    return 0;
}
