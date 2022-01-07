#include <stdio.h>
#include <locale.h> 

int main ()
{
    int cap_tanque; 
    float preco_tanque; 
    char combustivel;

    printf("-----------------------------\n");
    printf("      POSTO DE GASOLINA      \n");
    printf("-----------------------------\n");
    printf("[G] Gasolina\n");
    printf("[A] Álcool\n");
    printf("Qual o tipo de combustível? ");
    scanf("%c", &combustivel);
    printf("Qual a capacidade do tanque em litros? ");
    scanf("%d", &cap_tanque);

    system("pause");
    system("cls");

    switch (combustivel) 
    {
        case 'G':
            preco_tanque = cap_tanque * 5.00;
            break;

        case 'A':
            preco_tanque = cap_tanque * 6.80;
            break;

        default: 
            printf("Combustível não encontrado!");
            break;
    }

    printf("-----------------------------\n");
    printf("      POSTO DE GASOLINA      \n");
    printf("-----------------------------\n");
    printf("Valor para encher o tanque: %f", preco_tanque);
    
    return 0; 
}
