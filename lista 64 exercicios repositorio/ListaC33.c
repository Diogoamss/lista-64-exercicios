#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_ALL,"");

    int matricula;
    float nota;
    float somaNotas = 0.0;
    int contador = 0;
    char continuar;

    do {
        printf("Digite o número de matrícula do aluno: ");
        scanf("%d", &matricula);
        
        printf("Digite a nota do aluno (0 a 10): ");
        scanf("%f", &nota);
        
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
            continue;
        }

        somaNotas += nota;
        contador++;


        printf("Deseja inserir os dados de outro aluno? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');


    if (contador > 0) {
        float media = somaNotas / contador;
        printf("A média das notas dos %d alunos é: %.2f\n", contador, media);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }

    return 0;
}


