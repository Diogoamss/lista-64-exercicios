#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>

int main(){

    setlocale(LC_ALL,"");

    int i, random[1], tamanho= 10;

    printf("Desafio: tente adivinhar um numero entre 0 e 100. \nGerando um numero aleatorio...  ");

    srand(time(NULL));

    for(i=0; i < 1; i++){
        random[i] = rand() %100;
    }
    

    printf("voc� tem 10 tentativas para acertar um numero aleatorio de 0 a 100. \n Come�ando");

    int v[tamanho], tent=0;

    for(i=0; i<10; i++){
        printf("\nDigite um numero de 0 a 100:\n ");
        scanf("%d",&v[i]);
        tent++;

        if(tent==10){
                printf("\n\nO numero de tentativas se esgotou. voc� perdeu!");

        }else{
            
            if (v[i] > random[0])
            {
                printf("\nTentativa n� %d \no numero � menor que o numero escolhido", tent);
            }else{
                if (v[i] < random[0])
                {
                    printf("\nTentativa n� %d \no numero � maior que o numero escolhido", tent);
                }else{
                    printf("\nTentativa n� %d \nparabens o numero escolhido � igual ao numero sorteado!. ", tent);

                    return 0;
                }
                
            }


        }
    }
}