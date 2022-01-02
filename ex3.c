//03. Exercício 03
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int num, metade, dobro;

    printf("Escolha um número qualquer: ");
    scanf("%d", &num);

    metade = num/2;
    dobro = num*2;

    system("pause");
    system("cls");

    printf("A metade de %d é igual a: %d", num, metade);
    printf("\nO dobro de %d é igual a: %d", num, dobro);

    return 0;
}