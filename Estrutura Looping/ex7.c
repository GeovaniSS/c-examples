//Exercício 7
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, num, somaPar=0; 
    
    for (i = 1; i <= 10; i ++)
    {
        printf("Escolha um número qualquer: ");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            somaPar = somaPar + num; 
        }
    }

    system("pause");
    system("cls");

    printf("A soma dos números pares digitados é igual a: %d", somaPar);

    return 0;
}