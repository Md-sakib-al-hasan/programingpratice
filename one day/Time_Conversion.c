#include <stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    int val=a/3600;
    printf("%d:",val);
    val=(a%3600);
    int m=val%60;
    val=val/60;
    printf("%d:",val);
    printf("%d",m);


    
    
    return 0;
}