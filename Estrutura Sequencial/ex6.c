//6. Exercício 06
#include <stdio.h> 
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float desconto; 

    printf("Escolha um número qualquer: ");
    scanf("%d", &num);

    desconto = num - num * 12/100;

    printf("O número com 12 porcento de desconto vale: %f", desconto);
    return 0; 
}