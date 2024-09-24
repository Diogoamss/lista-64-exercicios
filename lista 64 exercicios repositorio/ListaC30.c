#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"");

    int A;

    printf("digite o numero que deseja ver a tabuada de 0 a 10:\n");
    scanf("%d",&A);

    printf("%d X 0 = %d\n",A, A*0);
    printf("%d X 1 = %d\n",A, A*1);
    printf("%d X 2 = %d\n",A, A*2);
    printf("%d X 3 = %d\n",A, A*3);
    printf("%d X 4 = %d\n",A, A*4);
    printf("%d X 5 = %d\n",A, A*5);
    printf("%d X 6 = %d\n",A, A*6);
    printf("%d X 7 = %d\n",A, A*7);
    printf("%d X 8 = %d\n",A, A*8);
    printf("%d X 9 = %d\n",A, A*9);
    printf("%d X 10 = %d\n",A, A*10);

}