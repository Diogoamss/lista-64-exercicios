#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int N1,N2,op;

    printf("escolha uma op��o:\n 1-verificar se os numeros s�o multiplos\n 2-verificar se s�o pares\n 3-verificar se a media � maior ou igual a 7\n 4-fechar programa\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("digite um numero: ");
        scanf("%d",&N1);

        printf("digite um outro numero: ");
        scanf("%d",&N2);

            if (N1 % N2 ==0 )
            {
                printf("%d � multiplo de %d",N1,N2);
            }else{
                if (N2 % N1==0)
                {
                    printf("%d � multiplo de %d",N2,N1);
                }else{
                    printf("%d e %d n�o s�o multipos",N1,N2);
                }
                

            }
            
    break;
    
    case 2:
        printf("digite um numero: ");
        scanf("%d",&N1);

        printf("digite um outro numero: ");
        scanf("%d",&N2);


        if ((N1%2==0)&&(N2%2==0))
        {
            printf("o numero %d � par!\n",N1);
            printf("o numero %d � par!\n",N2);
        }else
        {
            if ((N1%2==0)&&(N2%2!=0))
            {
                printf("o numero %d � par!\n",N1);
                printf("o numero %d � impar!\n",N2);
            }else
            {
                if ((N1%2!=0)&&(N2%2==0))
                {
                    printf("o numero %d � impar!\n",N1);
                    printf("o numero %d � par!\n",N2);
                }else
                {
                    printf("ambos os numeros s�o impares: %d %d",N1,N2);
                }
                
                
            }
            
            
        }
        
        
    break;

    case 3:
        printf("digite um numero: ");
        scanf("%d",&N1);

        printf("digite um outro numero: ");
        scanf("%d",&N2);


        if (((N1+N2)/2)>=7)
        {
            printf("A media dos dois numeros � maior ou igual a 7\n");
        }else
        {
            printf("A media dos dois numeros � menor do que 7\n");
        }
        
        

    break;

    case 4:
        return 0;
    break;
    
    default:
        printf("op��o invalida!\n");
        break;
    }


}