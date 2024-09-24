#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    float vol,raio,alt;

    printf("digite o raio da lata de oleo: ");
    scanf("%f",&raio);

    printf("digite a altura da lata de oleo: ");
    scanf("%f",&alt);

    vol= (((3.14159*raio)*raio)*alt);

    printf("o volume da lata de oleo e de: %f\n",vol);

 }