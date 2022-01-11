//Exercício 4
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int num, tabuada;  

    printf("Escolha um número qualquer: ");
    scanf("%d", &num);

    for (tabuada = 1; tabuada <= 10; tabuada++)
    {
        printf("\n %d x %d = %d", num, tabuada, num*tabuada);
    }

    return 0; 
}