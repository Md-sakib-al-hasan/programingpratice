#include <stdio.h>
#include <math.h>
int main ()
{ double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        printf("Impossivel calcular\n");
    }else if (b*b<4*a*c)
    {
         printf("Impossivel calcular\n");
    }else{
        double tmp=b*b-4*a*c;
        double R1=(-b+sqrt(tmp))/(2.0*a);
        double R2=(-b-sqrt(tmp))/(2.0*a);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    
    
      
    return 0;
}