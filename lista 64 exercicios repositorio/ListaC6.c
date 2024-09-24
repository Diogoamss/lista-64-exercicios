#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    float c,f;

    printf("escreva um valor em graus celsius: ");
    scanf("%f",&c);

    f=((9*c)+160)/5;

    printf("o valor em fahreinheit e: %f\n", f);

 }