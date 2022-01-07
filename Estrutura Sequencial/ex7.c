//7. Exercício 07
#include <stdio.h> 
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    float aumento; 

    printf("Escolha um número qualquer: ");
    scanf("%d", &num);

    aumento = num + num * 37/100;

    printf("O número %d com 37 porcento de aumento vale: %f", num, aumento);
    return 0; 
}