//Exemplo de Condicional Composta
#include <stdio.h> 

int main () 
{
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    system("pause");
    system("cls");

    if (idade >= 18) {
        printf("Maior de Idade!");
    }

    else {
        printf("Menor de Idade!");
    }
}