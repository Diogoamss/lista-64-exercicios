#include<stdio.h>
 #include<locale.h>

 int main(){

     setlocale(LC_ALL,"Portugues-Brazil");

     int n1,n2;

     printf("digite um numero inteiro: ");
     scanf("%d",&n1);

     printf("digite outro numero inteiro: ");
     scanf("%d",&n2);

        if (n1 > n2)
        {
            printf("o primeiro numero é maior que o segundo.\n");
        }

        if (n2 > n1)
        {
            printf("o segundo numero é maior que o primeiro.\n");
        }

        if (n1 == n2)
        {
            printf("os dois numeros sao iguais.\n");
        }

        if (n1 >= n2)
        {
            printf("o primeiro numero é maior ou igual ao segundo.\n");
        }

        if (n2 >= n1)
        {
            printf("o segundo numero é maior ou igual ao primeiro.\n");
        }

    
    return (0);

 }