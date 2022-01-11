//Exercício 03
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int num, qPar=0, qImpar=0; 

    do {
        printf("Digite um número qualquer: ");
        scanf("%d%*c", &num);
        
        if (num % 2 == 0)  
        {
            qPar = qPar + 1;
        }
            else 
            {
                qImpar = qImpar + 1; 
            }

    } while (num != 0);
    
    printf("Quantidade de pares digitados: %d\n", qPar-1);
    printf("Quantidade de ímpares digitados: %d", qImpar);


}