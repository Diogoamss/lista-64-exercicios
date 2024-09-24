#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int A,B,sub;

    printf("escreva dois numeros para a comparação: \n 1 numero  ");
    scanf("%i",&A);
    printf("2 numero  ");
    scanf("%i",&B);

    sub=(A-B);

    printf("a diferença entre os dois numeros é: \n %i",sub);


 }