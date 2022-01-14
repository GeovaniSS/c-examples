//Exercício 03
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int num, qPar=0, qImpar=0; 

    do {
        printf("-----------------------------\n");
        printf("       PARES E ÍMPARES       \n");
        printf("-----------------------------\n");
        printf("[0] - Finaliza o programa\n");
        printf("Digite um número:  ");
        scanf("%d%*c", &num);
        
        if (num % 2 == 0)  
        {
            qPar = qPar + 1;
        }
            else 
            {
                qImpar = qImpar + 1; 
            }

        system("cls"); //Limpa a tela
        
    } while (num != 0);
    
    printf("-----------------------------\n");
    printf("       PARES E ÍMPARES       \n");
    printf("-----------------------------\n");
    printf("Quantidade de pares digitados: %d\n", qPar-1);
    printf("Quantidade de ímpares digitados: %d", qImpar);

    return 0; 
}