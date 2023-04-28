#include <stdio.h>
int main ()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float val=((a*3.5)+(b*7.5))/(11);
    printf("MEDIA = %0.5f",val);
    return 0;
}