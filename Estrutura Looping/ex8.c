//Exercício 6
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    
    int i, num, qImpar=0; 
    
    for (i = 1; i <= 10; i ++)
    {
        printf("Escolha um número qualquer: ");
        scanf("%d", &num);

        if (num % 2 == 1)
        {
            qImpar = qImpar + 1; 
        }
    }

    printf("A quantidade de números ímpares digitados é igual a: %d", qImpar);
    
    return 0;
}