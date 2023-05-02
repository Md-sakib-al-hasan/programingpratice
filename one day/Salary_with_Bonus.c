#include <stdio.h>
int main ()
{
    char seller[100];
    scanf("%s",seller);
    float amount,sell;
    scanf("%f %f",&amount,&sell);
    printf("TOTAL = R$ %.2f\n", amount +(15*sell)/100);



    return 0;
}