#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int A,B,sub;

    printf("escreva dois numeros para a compara��o: \n 1 numero  ");
    scanf("%i",&A);
    printf("2 numero  ");
    scanf("%i",&B);

    sub=(A-B);

    printf("a diferen�a entre os dois numeros �: \n %i",sub);


 }