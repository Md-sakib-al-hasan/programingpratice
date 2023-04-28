#include <stdio.h>
int main ()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float val=((a*2.0)+(b*3.0)+(c*5.0))/(10.0);
    printf("MEDIA = %.1f",val);
    return 0;
}