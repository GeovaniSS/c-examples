//Exercício 6
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int i, notaFinalista, notaVencedora=0;
    char nomeFinalista[25], nomeVencedora[25];

    for (i = 1; i <= 5; i++) //5 Finalistas
    {
        printf("----------------------------\n");
        printf("        CONCURSO MISS       \n");
        printf("----------------------------\n");
        printf("%dª Finalista\n", i);
        printf("Nome: ");
        scanf("%s", &nomeFinalista);
        printf("Nota: ");
        scanf("%d", &notaFinalista);

        if (notaFinalista > notaVencedora)
        {
            notaVencedora = notaFinalista;
            strcpy(nomeVencedora, nomeFinalista); 
            /*A função strcpy é uma função da biblioteca
            <string.h> que basicamente copia o conteúdo de 
            uma string para outra string. */
        }

        system("pause");
        system("cls");
    }

    printf("--------------------------------\n");
    printf("   VENCEDORA DO CONCURSO MISS   \n");
    printf("--------------------------------\n");
    printf("Nome: %s\n", nomeVencedora);
    printf("Nota: %d", notaVencedora);

    return 0;
}