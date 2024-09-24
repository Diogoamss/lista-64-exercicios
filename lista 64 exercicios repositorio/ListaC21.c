#include<stdio.h>
 #include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int N1,op;

    printf("digite um numero inteiro aleatorio: \n");
    scanf("%d", &N1);

    if (N1>0)
    {
        printf("O valor escolhido é positivo!\n");
    }else{
        printf("O valor escolhido é negativo!\n");
    }

    printf("escolha uma opção\n 1° - recomeçar \n 2° - fechar programa\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("digite um numero inteiro aleatorio: \n");
        scanf("%d", &N1);

            if (N1>0)
            {
                printf("O valor escolhido é positivo!\n");
            }else{
            printf("O valor escolhido é negativo!\n");
            }
        break;
    
    case 2:
        return 0;
    break;

    default:
        printf("opção invalida!");

        break;
    }

    
    

}