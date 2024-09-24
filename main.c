#include <stdio.h>
#include <stdlib.h>

void menu(){

     printf("Menu:\n");

     printf("1 - Somar\n");
     printf("2 - Subtrair\n");
     printf("3 - Multiplicar\n");
     printf("4 - Dividir\n");
}

int main()
{
    int num1, num2, opcao;
    float resultado;

    do{
        menu();
        scanf("%d", &opcao);
    }while(opcao < 1 || opcao > 4);

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    menu(num1, num2);

}
