//Exercício 6
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    int notaFinalista, notaVencedora=0, i;
    char nomeFinalista[25], nomeVencedora[25];

    for (i = 1; i <= 5; i++)
    {
        printf("%dª Finalista\n", i);
        printf("Nome: ");
        scanf("%s", &nomeFinalista);
        printf("Nota: ");
        scanf("%d", &notaFinalista);

        system("cls");

        if (notaFinalista > notaVencedora)
        {
            notaVencedora = notaFinalista;
            strcpy(nomeVencedora, nomeFinalista);
        }
    }

    printf("VENCEDORA\n");
    printf("Nome: %s\n", nomeVencedora);
    printf("Nota: %d", notaVencedora);

    return 0;
}