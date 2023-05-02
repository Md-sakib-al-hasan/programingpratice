#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int AB=(a+b+abs(a-b))/2;
    int Ac=(AB+c+abs(AB-c))/2;
    printf("%d eh o maior\n",Ac);
    return 0;
}