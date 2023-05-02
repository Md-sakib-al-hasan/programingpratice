#include <stdio.h>
int main ()
{
    int p1,u1,p2,u2;float pi1,pi2;
    scanf("%d %d %f",&p1,&u1,&pi1);
     scanf("%d %d %f",&p2,&u2,&pi2);
     printf("VALOR A PAGAR: R$ %.2f",(u1*pi1)+(u2*pi2));



    return 0;
}