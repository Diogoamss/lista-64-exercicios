#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    float a,b,c,d,ad1,ad2,ad3,ad4,ad5,ad6,m1,m2,m3,m4,m5,m6;

    printf("digite o valor de A: ");
    scanf("%f",&a);

    printf("digite o valor de b: ");
    scanf("%f",&b);

    printf("digite o valor de c: ");
    scanf("%f",&c);

    printf("digite o valor de d: ");
    scanf("%f",&d);

        ad1=a+b;
        m1=a*b;

            printf(" a soma de A com B e: %f",ad1);
            printf("  e a multiplicacao e: %f\n",m1);

        ad2=a+c;
        m2=a*c;

            printf("a soma de A com C e: %f",ad2);
            printf(" e a multiplicacao e: %f\n",m2);

        ad3=a+d;
        m3=a*d;

            printf("a soma de A com D e: %f",ad3);
            printf(" e a multiplicacao e: %f\n",m3);

        ad4=b+c;
        m4=b*c;

            printf("a soma de B com C e: %f",ad4);
            printf(" e a multiplicacao e: %f\n",m4);

        ad5=b+d;
        m5=b*d;

            printf("a soma de B com D e: %f",ad5);
            printf(" e a multiplicacao e: %f\n",m5);

        ad6=c+d;
        m6=c*d;

            printf("a soma de C com D e: %f",ad6);
            printf(" e a multiplicacao e: %f\n",m6);





}