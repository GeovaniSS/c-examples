//9. Exercício 09
#include <stdio.h> 
#include <locale.h>
int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num, res; 

    printf("Escolha um número qualquer: ");
    scanf("%d", &num);

    res = num * 2 + 3; //cálculo da expressão

    printf("O valor da expressão %d * 2 + 3 é igual a: %d", num, res);

    return 0; 
}