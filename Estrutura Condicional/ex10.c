//Exercício 10
#include <stdio.h>
#include <locale.h> 

int main ()
{
    int capacidadeTanque; 
    float precoTanque; 
    char combustivel;

    printf("-----------------------------\n");
    printf("      POSTO DE GASOLINA      \n");
    printf("-----------------------------\n");
    printf("[G] Gasolina\n");
    printf("[A] Álcool\n");
    printf("Qual o tipo de combustível? ");
    scanf("%c", &combustivel);
    printf("Qual a capacidade do tanque em litros? ");
    scanf("%d", &capacidadeTanque);

    system("pause");
    system("cls");

    printf("-----------------------------\n");
    printf("      POSTO DE GASOLINA      \n");
    printf("-----------------------------\n");

    switch (combustivel) 
    {
        case 'G':
            precoTanque = capacidadeTanque * 6.80;
            printf("Valor para encher o tanque com gasolina: %f", precoTanque);
            break;

        case 'A':
            precoTanque = capacidadeTanque * 5.00;
            printf("Valor para encher o tanque com álcool: %f", precoTanque);
            break;

        default: 
            printf("Combustível não encontrado!");
            break;
    }
    
    return 0; 
}
