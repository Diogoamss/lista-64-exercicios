#include<stdio.h>
 #include<locale.h>

 int main(){

    setlocale(LC_ALL,"");

    int COD;

    printf("escolha uma opção:\n 1\n 2\n 3\n");
    scanf("%i",&COD);

    switch (COD)
    {
    case 1:
        printf("codigo valido! ");
        break;

    case 2:
        printf("codigo valido! ");
        break;

    case 3:
        printf("codigo valido! ");
        break;

    default:
        printf("codigo invalido! ");
        break;    
    }
    


 }