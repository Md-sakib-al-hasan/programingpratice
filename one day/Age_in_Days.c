#include <stdio.h>
int main ()
{
    int a;
    scanf("%d\n",&a);
    int val=a/365;
    printf("%d ano(s)\n",val);
    val=(a%365)/30;
    printf("%d mes(es)\n",val);
    val=((a%365)%30);
    printf("%d dia(s)\n",val);
    return 0;
}