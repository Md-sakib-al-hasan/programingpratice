#include <stdio.h>
#include <math.h>
int main ()
{
    float n;
    scanf("%f",&n);
    int a=n;
    float b=round((n-a)*100);
    int c=(int)b;
    printf("NOTAS:\n");
    int val=n/100;
    printf("%d nota(s) de R$ 100.00\n",val);
    a=a%100;
    val=a/50;
    printf("%d nota(s) de R$ 50.00\n",val);
    a=a%50;
    val=a/20;
    printf("%d nota(s) de R$ 20.00\n",val);
    a=a%20;
    val=a/10;
    printf("%d nota(s) de R$ 10.00\n",val);
    a=a%10;
    val=a/5;
    printf("%d nota(s) de R$ 5.00\n",val);
    a=a%5;
    val=a/2;
    printf("%d nota(s) de R$ 2.00\n",val);
    printf("MOEDAS:\n");
    a=a%2;
    val=a/1;
    printf("%d moeda(s) de R$ 1.00\n",val);
    a=a%1;
    val=c/50;
    printf("%d moeda(s) de R$ 0.50\n",val);
    c=c%50;
    val=c/25;
    printf("%d moeda(s) de R$ 0.25\n",val);
    c=c%25;
    val=c/10;
    printf("%d moeda(s) de R$ 0.10\n",val);
    c=c%10;
    val=c/5;
    printf("%d moeda(s) de R$ 0.05\n",val);
    c=c%5;
    val=c/1;
    printf("%d moeda(s) de R$ 0.01\n",val);


    return 0;
}
