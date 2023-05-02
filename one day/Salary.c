#include <stdio.h>
int main ()
{
    int n,a;
    float p;
    scanf ("%d %d %f",&n,&a,&p);
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f\n",a*p);
    return 0;
}