#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    float aver=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1f\n",aver);
    if(aver>=7.0){
        printf("Aluno aprovado.\n");
    }else if (aver<5.0)
    {
        printf("Aluno reprovado.\n");
    }else 
    {
        printf("Aluno em exame.\n");
        float k;
        scanf("%f",&k);
        printf("Nota do exame: %.1f\n",k);
        float su=(aver+k)/2;
        if(su>=5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
            printf("Media final: %.1f\n",su);
    }
    
    


    return 0;
}