#include <stdio.h>
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float a[6]={4.00,4.50,5.00,2.00,1.50};
    float s=a[x-1]*y;
    printf("Total: R$ %.2f",s);
    return 0;
}