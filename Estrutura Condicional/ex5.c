//Exercício 05 
#include <stdio.h> 
#include <locale.h> 

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    float sal_ini, sal_novo;

    printf("Informe o salário: ");
    scanf("%f%*c", &sal_ini);

    system("pause");
    system("cls");

    printf("-----------------------\n");
    printf("        REAJUSTE       \n");
    printf("-----------------------\n");

    if (sal_ini <= 900) {
        sal_novo = sal_ini + 0.25 * sal_ini; //salário com reajuste de 25%
        printf("Salário inicial: %f\n", sal_ini);
        printf("Salário com reajuste de 25 por cento: %f", sal_novo);
    }

    else {
        sal_novo = sal_ini + 0.20 * sal_ini; //salário com reajuste de 20%
        printf("Salário inicial: %f\n", sal_ini);
        printf("Salário com reajuste de 20 por cento: %f", sal_novo);
    }

    return 0;
}