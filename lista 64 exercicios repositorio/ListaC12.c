#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"Portugues-Brazil");

    int X;

    printf("digite o valor de X: ");
    scanf("%i",&X);

    if (X>=0)
    {
        printf("o modulo de X é :%i",X);
        
    }else{

        X=(X*(-1));

        printf("o modulo de X é :%i",X);
    } 

 }