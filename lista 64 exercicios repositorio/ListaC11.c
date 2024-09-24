#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int A,B;

    printf("digite um valor para  variavel A: ");
    scanf("%i",&A);

    printf("digite um valor para  variavel B: ");
    scanf("%i",&B);


    A=A+B;
    A=A-B;
    B=B-A;

    printf("o valor da variavel A era:\n A=%i, e passou a ser: A=%i.",B,A);
    printf("o valor da variavel A era:\n B=%i, e passou a ser: B=%i.",A,B);


 }