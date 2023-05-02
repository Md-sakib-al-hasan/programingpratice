#include <stdio.h>
int main ()
{
    float n;
    scanf("%f",&n);
    printf("NOTAS:\n");
   int a=n;
   int val=a/100;
   printf("%d nota(s) de R$ 100.00\n",val);
   a=a%100;
   val=a/50;
   printf("%d nota(s) de R$ 50.00\n",val);


    return 0;
}