#include <stdio.h> 
#include <locale.h> 

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    float sal_ini, sal_reajuste;

    printf("Informe o salário: ");
    scanf("%f%*c", &sal_ini);

    if (sal_ini <= 900) {
        sal_reajuste = (0.25 * sal_ini) + sal_ini;
    }

    else {
        sal_reajuste = (0.20 * sal_ini) + sal_ini;
    }

    system("pause");
    system("cls");

    printf("-----------------------\n");
    printf("        REAJUSTE       \n");
    printf("-----------------------\n");
    printf("Salário inicial: %f\n", sal_ini);
    printf("Salário com reajuste: %f", sal_reajuste);


    return 0;
}