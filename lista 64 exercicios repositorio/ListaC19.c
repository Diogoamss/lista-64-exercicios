#include<stdio.h>
 #include<locale.h>

int main(){

    setlocale(LC_ALL,"");
    
    int A,B,C;

    printf("escolha um valor para o 1° lado do triangulo\n");
    scanf("%i",&A);

    printf("escolha um valor para o 2° lado do triangulo\n");
    scanf("%i",&B);

    printf("escolha um valor para o 3° lado do triangulo\n");
    scanf("%i",&C);

    if (((A+B)>C)&&((B+C)>A)&&((C+A)>B))
    {

        if ((A==B)&&(B==C))
        {
            printf("o triangulo é equilatero.");
        }else{
            
            if ((A==B)&&(A==C)&&(B==C))
            {

                printf("o triangulo é isóceles.");

            }else{
                printf("o triangulo é escaleno.");

            }
            

        }
        

    }
    

}