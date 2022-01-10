//Exercício 06
#include <stdio.h> 
#include <locale.h> 

int main () {
    setlocale(LC_ALL, "Portuguese");

    int anosdeTrabalho;
    float salarioInicial, bonusSalarial; 

    printf("------------------------\n");
    printf("       EMPRESA XKW      \n");
    printf("------------------------\n");

    printf("Informe o seu salário: ");
    scanf("%f", &salarioInicial);

    printf("Quantos anos de trabalho? ");
    scanf("%d", &anosdeTrabalho);

    system("pause");
    system("cls");
    
    printf("------------------------\n");
    printf("      BÔNUS SALARIAL    \n");
    printf("------------------------\n");
    printf("Salário inicial: %f\n", salarioInicial);

    if (anosdeTrabalho >= 5) {
        bonusSalarial = salarioInicial+ 0.2 * salarioInicial;  
        printf("Bônus de 20 por cento: %f", bonusSalarial);
    }

    else {
        bonusSalarial = salarioInicial+ 0.1 * salarioInicial; 
        printf("Bônus de 10 por cento: %f", bonusSalarial);
    }
}