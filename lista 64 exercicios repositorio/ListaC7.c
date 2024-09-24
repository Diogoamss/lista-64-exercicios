#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    float c,f;

    printf("escreva um valor em Fahrenheits: ");
    scanf("%f",&f);

    c= (((f-32)*5)/9);

    printf("o valor em graus celsius e: %f\n", c);

 }