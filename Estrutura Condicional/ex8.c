//Exercício 08
#include <stdio.h> 
#include <locale.h> 

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int produto; 

    printf("--------------------\n");
    printf("       CÓDIGO       \n");
    printf("--------------------\n");
    printf("Digite o código do produto [1-10]: ");
    scanf("%d", &produto);

    system("pause");
    system("cls");

    printf("-----------------------\n");
    printf("     CLASSIFICAÇÃO     \n");
    printf("-----------------------\n");

    switch (produto) 
    {
        case 1: 
            printf("Alimento não-perecível");
            break;

        case 2: case 3: case 4:  
            printf("Alimento perecível");
            break;

        case 5: case 6: 
            printf("Vestuário");
            break;

        case 7:
            printf("Higiene Pessoal");
            break;

        case 8: case 9: case 10:
            printf("Utensílios domésticos");
            break;

        default: 
            printf("Código inválido!");
            break;
    }

    return 0;
}