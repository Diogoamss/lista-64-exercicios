#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    float h,ai;
    int s;

    printf("qual � o seu sexo?\n 1-homem\n 2-mulher\n");
    scanf("%d",&s);

    printf("qual � sua altura?\n");
    scanf("%f",&h);

    switch (s)
    {
    case 1:
        ai=(h*72.7)-58;

        printf("seu peso ideal �: %f",ai);

        break;
    
    case 2:
        ai=((62.1 * h)-44.7);

        printf("seu peso ideal �: %.2f",ai);

        break;
    
    default:
        printf("op��o invalida!");
        break;
    }
    

}