#include <stdio.h> 
#include <locale.h> 

int main () {
    setlocale(LC_ALL, "Portuguese");

    int sal_ini, anos, bonus; 

    printf("------------------------\n");
    printf("       EMPRESA XKW      \n");
    printf("------------------------\n");

    printf("Qual o seu salário?");
    scanf("%d", &sal_ini);

    printf("Quantos anos de trabalho?");
    scanf("%d", &anos);

    if (anos >= 5) {
        bonus = 0.2 * sal_ini + sal_ini; 
    }

    else {
        bonus = 0.1 * sal_ini + sal_ini; 
    }

    system("pause");
    system("cls");

    printf("------------------------\n");
    printf("      BÔNUS SALARIAL    \n");
    printf("------------------------\n");
    printf("BÔNUS: %d", bonus);
}