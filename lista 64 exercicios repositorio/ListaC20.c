#include<stdio.h>
 #include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A,B,C;

    printf("digite um valor inteiro para a variavel A: \n");
    scanf("%i",&A);

    printf("digite um valor inteiro para a variavel B: \n");
    scanf("%i",&B);

    printf("digite um valor inteiro para a variavel C: \n");
    scanf("%i",&C);

    while ((A==0)||(B==0)||(C==0))
    {
        if ((A==0)||(B==0)||(C==0))
        {
            printf("os numeros inseridos estão incorretos! insira-os novamente.\n");

            printf("digite um valor inteiro para a variavel A: \n");
            scanf("%i",&A);

            printf("digite um valor inteiro para a variavel B: \n");
            scanf("%i",&B);

            printf("digite um valor inteiro para a variavel C: \n");
            scanf("%i",&C);
                
        }else{
            printf("os numeros inseridos estão corretos! \n");
        }

        
        
        
    }
    
    

}