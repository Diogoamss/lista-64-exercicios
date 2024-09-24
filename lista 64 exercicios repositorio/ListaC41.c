#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int idade;

    printf("digite a idade do nadador: ");
    scanf("%d", &idade);


     if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 11) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 12 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adultos\n");
    } else {
        printf("Idade inválida para classificação.\n");
    }

    return 0;
    

}